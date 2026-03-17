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
4. **Computação em Nuvem (AWS):** Estimativa de custos para hospedagem da solução na AWS, comparando as regiões de São Paulo e Virgínia do Norte.


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


## ☁️ Entrega 2 - Computação em Nuvem (AWS)

### Objetivo

Estimar os custos para hospedar uma API na AWS que receberá dados dos sensores e executará o modelo de Machine Learning. Comparação entre as regiões de **São Paulo (sa-east-1)** e **Virgínia do Norte (us-east-1)** com instâncias **On-Demand (100%)**.

### Requisitos da Máquina

| Recurso | Especificação |
|---|---|
| Sistema Operacional | Linux |
| vCPUs | 2 |
| Memória RAM | 1 GiB |
| Rede | Até 5 Gigabit |
| Armazenamento | 50 GB (HD) |

### Instâncias EC2 compatíveis

Três tipos de instância atendem exatamente às especificações:

| Instância | vCPUs | Memória | Rede | Processador | Arquitetura |
|---|---|---|---|---|---|
| t4g.micro | 2 | 1 GiB | Até 5 Gbps | AWS Graviton2 | ARM64 |
| t3a.micro | 2 | 1 GiB | Até 5 Gbps | AMD EPYC | x86_64 |
| t3.micro | 2 | 1 GiB | Até 5 Gbps | Intel Skylake | x86_64 |

### Comparação de Custos - EC2 (On-Demand, Linux)

Valores mensais baseados em **730 horas/mês** (padrão AWS).

**Virgínia do Norte (us-east-1)**

| Instância | Custo/Hora | Custo Mensal |
|---|---|---|
| t4g.micro | $0,0084 | ~$6,13 |
| t3a.micro | $0,0094 | ~$6,86 |
| t3.micro | $0,0104 | ~$7,59 |

**São Paulo (sa-east-1)**

| Instância | Custo/Hora | Custo Mensal |
|---|---|---|
| t4g.micro | $0,0134 | ~$9,78 |
| t3a.micro | $0,0151 | ~$11,02 |
| t3.micro | $0,0111 | ~$8,10 |

> A região de São Paulo é em média **30% a 60% mais cara** que a Virgínia do Norte.

### Comparação de Custos - Armazenamento EBS (50 GB)

| Região | Tipo | Preço por GB/mês | Custo 50 GB/mês |
|---|---|---|---|
| us-east-1 (Virgínia) | Magnetic (Standard) | $0,05 | $2,50 |
| sa-east-1 (São Paulo) | Magnetic (Standard) | $0,12 | $6,00 |

### Custo Total Mensal (EC2 + EBS 50 GB)

| Região | Instância | EC2/mês | EBS/mês | **Total/mês** |
|---|---|---|---|---|
| us-east-1 | t4g.micro | $6,13 | $2,50 | **$8,63** |
| us-east-1 | t3a.micro | $6,86 | $2,50 | **$9,36** |
| us-east-1 | t3.micro | $7,59 | $2,50 | **$10,09** |
| sa-east-1 | t3.micro | $8,10 | $6,00 | **$14,10** |
| sa-east-1 | t4g.micro | $9,78 | $6,00 | **$15,78** |
| sa-east-1 | t3a.micro | $11,02 | $6,00 | **$17,02** |

**Solução mais barata:** instância **t4g.micro** na região **us-east-1 (Virgínia do Norte)** com 50 GB EBS Magnetic, totalizando **$8,63/mês**.

### Escolha da Região - Justificativa

> **Cenário proposto:** acesso rápido aos dados dos sensores e restrições legais para armazenamento no exterior.

**Região escolhida: São Paulo (sa-east-1)**

Apesar de ser mais cara, a região de São Paulo é a escolha adequada pelos seguintes motivos:

**1. Conformidade Legal (LGPD)**

A Lei Geral de Proteção de Dados (Lei nº 13.709/2018) estabelece regras para o tratamento de dados no Brasil. Quando há restrições legais para armazenamento no exterior, manter a infraestrutura em território nacional é obrigatório. A região sa-east-1 possui data centers em São Paulo, garantindo conformidade com a legislação vigente.

**2. Latência e Acesso Rápido aos Dados**

A fazenda e seus sensores estão no Brasil. A região de São Paulo proporciona:
- **Menor latência:** ~10-30ms vs ~120-180ms para Virgínia do Norte
- **Maior velocidade** no envio e recebimento de dados em tempo real
- **Maior confiabilidade** da conexão, com menos saltos de rede

**3. Análise Custo-Benefício**

| Fator | Virgínia do Norte | São Paulo |
|---|---|---|
| Custo mensal (mais barato) | $8,63 | $14,10 |
| Diferença mensal | - | +$5,47 |
| Latência estimada | ~120-180ms | ~10-30ms |
| Conformidade LGPD | Não atende | Atende |
| Proximidade dos sensores | Distante | Próximo |

A diferença de **~$5,47/mês** é um valor pequeno frente aos benefícios de conformidade legal e desempenho. Em um cenário agrícola onde decisões em tempo real impactam a produtividade de 200 hectares, a latência reduzida e a segurança jurídica justificam o investimento adicional.

### Configuração Recomendada

- **Região:** São Paulo (sa-east-1)
- **Instância:** t3.micro (2 vCPUs, 1 GiB RAM, até 5 Gbps)
- **Armazenamento:** 50 GB EBS Magnetic (Standard)
- **Custo mensal estimado:** ~$14,10/mês

> Fontes: [AWS EC2 On-Demand Pricing](https://aws.amazon.com/ec2/pricing/on-demand/) | [AWS EBS Pricing](https://aws.amazon.com/ebs/pricing/) | [EC2 Instance Types](https://instances.vantage.sh/)

---

## 📋 Licença

<img style="height:22px!important;margin-left:3px;vertical-align:text-bottom;" src="https://mirrors.creativecommons.org/presskit/icons/cc.svg?ref=chooser-v1"><img style="height:22px!important;margin-left:3px;vertical-align:text-bottom;" src="https://mirrors.creativecommons.org/presskit/icons/by.svg?ref=chooser-v1"><p xmlns:cc="http://creativecommons.org/ns#" xmlns:dct="http://purl.org/dc/terms/"><a property="dct:title" rel="cc:attributionURL" href="https://github.com/agodoi/template">MODELO GIT FIAP</a> por <a rel="cc:attributionURL dct:creator" property="cc:attributionName" href="https://fiap.com.br">Fiap</a> está licenciado sobre <a href="http://creativecommons.org/licenses/by/4.0/?ref=chooser-v1" target="_blank" rel="license noopener noreferrer" style="display:inline-block;">Attribution 4.0 International</a>.</p>

