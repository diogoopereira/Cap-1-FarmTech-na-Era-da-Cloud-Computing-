#include <WiFi.h>
#include <PubSubClient.h>
#include "DHT.h"

const char* SSID = "Wokwi-GUEST";
const char* PASSWORD = "";
const char* MQTT_CLIENT_ID = "farmtech";
const char* TOKEN = "BBUS-4hXkkEImZPuBN4nW1SqjElxOF1dR0O";
const char* DEVICE_LABEL = "esp32-farmtech";
const char* MQTT_SERVER = "industrial.api.ubidots.com";

#define DHTPIN 15
#define SOIL_PIN 34
#define DHTTYPE DHT22

DHT dht(DHTPIN, DHTTYPE);
WiFiClient espClient;
PubSubClient client(espClient);

void setup_wifi() {
  delay(10);
  Serial.println("\nConectando Wi-Fi...");
  WiFi.begin(SSID, PASSWORD);
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  Serial.println("\nWi-Fi Conectado!");
}

void reconnect() {
  while (!client.connected()) {
    Serial.print("Tentando conexão MQTT...");
    if (client.connect(MQTT_CLIENT_ID, TOKEN, "")) {
      Serial.println("Conectado ao Broker!");
    } else {
      Serial.print("Falha, rc=");
      Serial.print(client.state());
      delay(5000);
    }
  }
}

void setup() {
  Serial.begin(115200);
  dht.begin();
  setup_wifi();
  client.setServer(MQTT_SERVER, 1883);
}

void loop() {
  if (!client.connected()) {
    reconnect();
  }
  client.loop();

  float t = dht.readTemperature();
  float h = dht.readHumidity();
  int soloRaw = analogRead(SOIL_PIN);
  int s = map(soloRaw, 0, 4095, 0, 100);

  if (!isnan(t) && !isnan(h)) {
    String topic = "/v1.6/devices/" + String(DEVICE_LABEL);
    String payload = "{\"temperatura\": " + String(t) +
                     ", \"umidade_ar\": " + String(h) +
                     ", \"umidade_solo\": " + String(s) + "}";

    Serial.print("Enviando para Ubidots: ");
    Serial.println(payload);

    client.publish(topic.c_str(), payload.c_str());
  }

  delay(5000);
}
