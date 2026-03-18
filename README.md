# FIAP - Faculdade de Informática e Administração Paulista

<p align="center">
<a href= "https://www.fiap.com.br/"><img src="assets/logo-fiap.png" alt="FIAP - Faculdade de Informática e Admnistração Paulista" border="0" width=40% height=40%></a>
</p>

<br>

# Nome do projeto
- <h1>FarmTech-na-Era-da-Cloud-Computing</h1>

## Nome do grupo

## 👨‍🎓 Integrantes: 
- <a href="https://www.linkedin.com/company/inova-fusca">Diogo Ferreira Pereira</a>
- <a href="https://www.linkedin.com/company/inova-fusca">André Victor Gonçalves Toledo</a>
- <a href="https://www.linkedin.com/company/inova-fusca">Johnathan da Cruz Gatt</a> 
- <a href="https://www.linkedin.com/company/inova-fusca">Laisa Cristina Capodifoglio Andrade<a> 
- <a href="https://www.linkedin.com/company/inova-fusca">Filipe Augusto Lima Silva</a>

## 👩‍🏫 Professores:
### Tutor(a) 
- <a href="https://www.linkedin.com/company/inova-fusca">Sabrina Otoni</a>
### Coordenador(a)
- <a href="https://www.linkedin.com/company/inova-fusca">ANDRÉ GODOI CHIOVATO</a>


## 📜 Descrição

O projeto **FarmTech Solutions** consiste no desenvolvimento de uma solução baseada em Machine Learning para prever o rendimento de safras agrícolas de uma fazenda de médio porte (200 hectares). Com base em variáveis climáticas e de solo (como temperatura, precipitação e umidade), o objetivo principal é fornecer projeções precisas que auxiliem na tomada de decisão dos agricultores.

Durante esta fase (Fase 5), o projeto foca em:
1. **Análise Exploratória de Dados (EDA):** Compreensão da correlação entre o clima e o rendimento da safra.
2. **Clusterização e Detecção de Outliers:** Agrupamento de perfis climáticos similares utilizando *K-Means* e identificação de anomalias com *Isolation Forest*.
3. **Modelagem Preditiva:** Criação e avaliação de cinco diferentes algoritmos de regressão (Regressão Múltipla Linear, Árvore de Decisão, Random Forest, Gradient Boosting e SVR) para estimar o rendimento das culturas, sendo avaliados por métricas como RMSE, MAE e R².


## 📁 Estrutura de pastas

Dentre os arquivos e pastas presentes na raiz do projeto, definem-se:

- <b>.github</b>: Nesta pasta ficarão os arquivos de configuração específicos do GitHub que ajudam a gerenciar e automatizar processos no repositório.

- <b>src</b>: Todo o código fonte criado para o desenvolvimento do projeto ao longo das 7 fases.

- <b>README.md</b>: arquivo que serve como guia e explicação geral sobre o projeto (o mesmo que você está lendo agora).

## 🔧 Como executar o código

### Pré-requisitos
Para executar este projeto, você precisará ter o Python 3.9+ instalado em sua máquina. A execução foi elaborada principalmente via [Jupyter Notebook](https://jupyter.org/).

As principais bibliotecas utilizadas são:
- `pandas` e `numpy` para manipulação de dados
- `matplotlib` e `seaborn` para visualização gráfica
- `scikit-learn` para modelagem de Machine Learning

### Passo a passo para execução (Fase 5)
1. **Clone o repositório** para a sua máquina local:
   ```bash
   git clone <url-do-repositorio>
   ```
2. **Acesse a pasta do projeto**:
   ```bash
   cd src
   ```
3. **Instale as dependências** do projeto baseadas no arquivo de requisitos:
   ```bash
   pip install -r requirements.txt
   ```
4. **Execute o Jupyter Notebook**:
   ```bash
   jupyter notebook DiogoPereira_rm568326__pbl_fase4.ipynb
   ```
5. No navegador, execute as células sequencialmente para visualizar a análise exploratória, a clusterização e os resultados dos algoritmos preditivos.


## 🚀 Ir Além — Sistema de Coleta e Comunicação de Dados Usando ESP32 Integrado ao Wi-Fi

### Objetivo

Desenvolver um sistema IoT utilizando um ESP32 com comunicação Wi-Fi para coleta de dados ambientais via sensores, enviando as leituras em tempo real para o broker MQTT da plataforma **Ubidots**, onde os dados são visualizados em um dashboard interativo.

### Sensores Utilizados e Justificativa

| Sensor | Grandeza Medida | Justificativa |
|---|---|---|
| **DHT22** | Temperatura e Umidade do Ar | Monitorar as condições climáticas é essencial para a agricultura. A temperatura e a umidade do ar influenciam diretamente no desenvolvimento das culturas, na propagação de pragas e doenças, e na definição dos períodos ideais de plantio e colheita. |
| **Sensor de Umidade do Solo (Capacitivo)** | Umidade do Solo | A umidade do solo é o fator mais crítico para a irrigação. Monitorá-la permite otimizar o uso da água, evitando desperdício por irrigação excessiva ou perda de produtividade por falta de água. |

A escolha desses dois sensores está diretamente alinhada às soluções da **FarmTech Solutions**, que busca utilizar dados climáticos e de solo para prever o rendimento das safras e auxiliar na tomada de decisão dos agricultores. Os dados coletados (temperatura, umidade do ar e umidade do solo) são as mesmas variáveis utilizadas no modelo preditivo de Machine Learning desenvolvido nas fases anteriores do projeto.

### Arquitetura do Sistema

```
┌─────────────────────────────────────────────────────────────────┐
│                        ESP32 (Wokwi)                            │
│                                                                 │
│   ┌───────────┐    ┌──────────────────────┐                     │
│   │  DHT22    │    │  Sensor Umidade Solo │                     │
│   │ (GPIO 15) │    │     (GPIO 34)        │                     │
│   └─────┬─────┘    └──────────┬───────────┘                     │
│         │                     │                                 │
│         └──────────┬──────────┘                                 │
│                    │                                            │
│              Leitura dos Sensores                               │
│              (temperatura, umidade ar, umidade solo)            │
│                    │                                            │
│              ┌─────▼─────┐                                      │
│              │   Wi-Fi   │                                      │
│              └─────┬─────┘                                      │
└────────────────────┼────────────────────────────────────────────┘
                     │
                     │ MQTT (porta 1883)
                     │ Tópico: /v1.6/devices/esp32-farmtech
                     │ Payload JSON:
                     │ {
                     │   "temperatura": 25.3,
                     │   "umidade_ar": 60.5,
                     │   "umidade_solo": 45
                     │ }
                     ▼
          ┌─────────────────────┐
          │      Ubidots        │
          │  (Broker MQTT)      │
          │                     │
          │  ┌───────────────┐  │
          │  │   Dashboard   │  │
          │  │  - Gráficos   │  │
          │  │  - Histórico  │  │
          │  │  - Alertas    │  │
          │  └───────────────┘  │
          └─────────────────────┘
```

### Tecnologias Utilizadas

| Tecnologia | Uso |
|---|---|
| **ESP32** | Microcontrolador com Wi-Fi integrado |
| **C/C++ (Arduino)** | Linguagem de programação do firmware |
| **Wi-Fi (IEEE 802.11)** | Comunicação sem fio |
| **MQTT** | Protocolo de mensageria leve para IoT |
| **Ubidots** | Plataforma IoT para recebimento e visualização dos dados |
| **Wokwi** | Simulador online para prototipagem do circuito |

### Fluxo de Funcionamento

1. O ESP32 conecta-se à rede Wi-Fi configurada.
2. Estabelece conexão com o broker MQTT da Ubidots usando token de autenticação.
3. A cada **5 segundos**, realiza a leitura dos sensores:
   - **DHT22**: temperatura (°C) e umidade relativa do ar (%).
   - **Sensor capacitivo de solo**: umidade do solo (0-100%), mapeada a partir da leitura analógica (0-4095).
4. Os dados são formatados em JSON e publicados no tópico MQTT `/v1.6/devices/esp32-farmtech`.
5. A plataforma Ubidots recebe os dados e os exibe em um dashboard com gráficos em tempo real.

### Código-Fonte

O código do firmware está disponível em [`src/sketch.ino`](src/sketch.ino).

### Como Simular no Wokwi

1. Acesse [wokwi.com](https://wokwi.com/).
2. Crie um novo projeto com **ESP32**.
3. Adicione os componentes:
   - **DHT22** conectado ao GPIO 15
   - **Potenciômetro** (simulando sensor de umidade do solo) conectado ao GPIO 34
4. Copie o código de `src/sketch.ino` para o editor.
5. Adicione as bibliotecas `DHT sensor library`, `PubSubClient` e `WiFi` no `libraries.txt`.
6. Execute a simulação.

---

## 📋 Licença

<img style="height:22px!important;margin-left:3px;vertical-align:text-bottom;" src="https://mirrors.creativecommons.org/presskit/icons/cc.svg?ref=chooser-v1"><img style="height:22px!important;margin-left:3px;vertical-align:text-bottom;" src="https://mirrors.creativecommons.org/presskit/icons/by.svg?ref=chooser-v1"><p xmlns:cc="http://creativecommons.org/ns#" xmlns:dct="http://purl.org/dc/terms/"><a property="dct:title" rel="cc:attributionURL" href="https://github.com/agodoi/template">MODELO GIT FIAP</a> por <a rel="cc:attributionURL dct:creator" property="cc:attributionName" href="https://fiap.com.br">Fiap</a> está licenciado sobre <a href="http://creativecommons.org/licenses/by/4.0/?ref=chooser-v1" target="_blank" rel="license noopener noreferrer" style="display:inline-block;">Attribution 4.0 International</a>.</p>

