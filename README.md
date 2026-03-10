# FIAP - Faculdade de Informática e Administração Paulista

<p align="center">
<a href= "https://www.fiap.com.br/"><img src="assets/logo-fiap.png" alt="FIAP - Faculdade de Informática e Admnistração Paulista" border="0" width=40% height=40%></a>
</p>

<br>

# Nome do projeto

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
   jupyter notebook FarmTech_ML_Project.ipynb
   ```
5. No navegador, execute as células sequencialmente para visualizar a análise exploratória, a clusterização e os resultados dos algoritmos preditivos.


## 📋 Licença

<img style="height:22px!important;margin-left:3px;vertical-align:text-bottom;" src="https://mirrors.creativecommons.org/presskit/icons/cc.svg?ref=chooser-v1"><img style="height:22px!important;margin-left:3px;vertical-align:text-bottom;" src="https://mirrors.creativecommons.org/presskit/icons/by.svg?ref=chooser-v1"><p xmlns:cc="http://creativecommons.org/ns#" xmlns:dct="http://purl.org/dc/terms/"><a property="dct:title" rel="cc:attributionURL" href="https://github.com/agodoi/template">MODELO GIT FIAP</a> por <a rel="cc:attributionURL dct:creator" property="cc:attributionName" href="https://fiap.com.br">Fiap</a> está licenciado sobre <a href="http://creativecommons.org/licenses/by/4.0/?ref=chooser-v1" target="_blank" rel="license noopener noreferrer" style="display:inline-block;">Attribution 4.0 International</a>.</p>

