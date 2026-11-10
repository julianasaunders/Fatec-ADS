# 🖥️ Resumo: Estrutura e Arquitetura de Sistemas Operacionais
**Disciplina:** Sistemas Operacionais  
**Professor:** Prof. Me. Deivison S. Takatu (`deivison.takatu@fatec.sp.gov.br`)  
**Instituição:** Fatec - Faculdade de Tecnologia  

---

## ❓ Por que precisamos de um Sistema Operacional (SO)?

Sem um Sistema Operacional, cada aplicação precisaria gerenciar o hardware do zero, tornando o desenvolvimento extremamente complexo e propenso a falhas[cite: 1].

| ❌ Sem Sistema Operacional | ✅ Com Sistema Operacional (SO) |
| :--- | :--- |
| Controlar diretamente a memória[cite: 1] | **Abstração:** O SO fornece uma camada intermediária entre o hardware e os programas[cite: 1]. |
| Acessar e gerenciar a CPU manualmente[cite: 1] | **Segurança:** Evita o acesso desordenado aos recursos do sistema[cite: 1]. |
| Programar drivers específicos para cada dispositivo[cite: 1] | **Padronização:** Oferece APIs e rotinas prontas para as aplicações[cite: 1]. |
| Gerenciar a estrutura de arquivos do disco[cite: 1] | **Gerenciamento:** Controla memória, processos e dispositivos de forma transparente[cite: 1]. |

---

## 🧱 Componentes Principais do Sistema Operacional

O Sistema Operacional é dividido em várias partes com papéis bem definidos[cite: 1]:

+-----------------------------------------------------------+
|                      Aplicações                           |  <-- Programas do Usuário
+-----------------------------------------------------------+
|                 Sistema Operacional                       |  <-- Camada de Abstração
|  (Processos | Memória | Arquivos | E/S | Drivers | Kernel) |
+-----------------------------------------------------------+
|                       Hardware                            |  <-- CPU, RAM, Discos, etc.
+-----------------------------------------------------------+


* 🧠 **Kernel (Núcleo):** O coração do sistema; gerencia os recursos mais críticos[cite: 1].
* ⚙️ **Gerenciamento de Processos:** Controla a criação, execução e finalização dos programas[cite: 1].
* 💾 **Gerenciamento de Memória:** Cuida da alocação, liberação e proteção da RAM/Memória Virtual[cite: 1].
* 📁 **Sistema de Arquivos:** Organiza e armazena os dados no disco em diretórios/arquivos[cite: 1].
* 🔌 **Entrada e Saída (E/S):** Gerencia a comunicação entre o sistema e os periféricos[cite: 1].
* 🚗 **Drivers de Dispositivos:** Interfaces de software que traduzem os comandos do SO para o hardware específico[cite: 1].

---

## 🔒 Modos de Execução e Níveis de Acesso

Para garantir a estabilidade e segurança, os processadores trabalham com modulação de privilégios[cite: 1]:

[ Aplicação no Modo Usuário ] ---> (System Call) ---> [ Kernel no Modo Kernel ] ---> [ Hardware ]


1. **👤 Modo Usuário (*User Mode*):**
   * Onde as aplicações comuns (navegadores, editores) executam[cite: 1].
   * Possui acesso **limitado** ao hardware[cite: 1].
2. **🔄 Chamada de Sistema (*System Call*):**
   * A ponte/interface onde uma aplicação solicita um serviço ao Kernel[cite: 1].
3. **🛡️ Modo Kernel (*Kernel Mode*):**
   * Executa funções críticas com acesso **total e irrestrito** aos recursos e ao hardware[cite: 1].

> **🎯 Objetivo da separação:** Garantir que um programa com defeito ou malicioso não derrube o sistema todo ou acesse dados de outros programas[cite: 1].

---

## 🔄 Programas, Processos e Threads

É essencial diferenciar esses três conceitos fundamentais[cite: 1]:

| Conceito | O que é? | Exemplo Real |
| :--- | :--- | :--- |
| **📁 Programa** | Arquivo estático armazenado no disco (código fonte compilado)[cite: 1]. | O executável do `chrome.exe` no HD/SSD[cite: 1]. |
| **⚡ Processo** | Um programa carregado na memória RAM e em execução, contendo recursos próprios[cite: 1]. | Uma instância em execução do Google Chrome[cite: 1]. |
| **🧵 Thread** | Subdivisão/fluxo de execução dentro de um único processo[cite: 1]. | Cada aba aberta ou tarefa executando no Chrome[cite: 1]. |

### 🔍 Estrutura de um Processo
Um processo em execução contém[cite: 1]:
* **Text:** Código executável[cite: 1].
* **Data:** Dados globais/estáticos[cite: 1].
* **Stack (Pilha):** Memória temporária para chamadas de funções e variáveis locais[cite: 1].
* **Registradores & CPU Context:** Estado do processador[cite: 1].
* **Recursos:** Arquivos e conexões abertas[cite: 1].

---

## 📂 Sistema de Arquivos

Organiza dados de maneira **hierárquica** em árvores de diretórios (pastas e arquivos) para facilitar o acesso e localização[cite: 1].

* **📁 Diretório Raiz (`/` ou `C:\`)**[cite: 1]
  * 📁 Disciplinas[cite: 1]
    * 📁 Aulas[cite: 1]
    * 📁 Listas[cite: 1]
      * 📄 Português[cite: 1]
      * 📄 `ListaMat.txt`[cite: 1]
  * 📁 Fotos[cite: 1]

---

## ⌨️ Entrada/Saída (E/S) e Drivers de Dispositivos

Os **drivers** abstraem a complexidade do hardware, permitindo que o SO envie comandos genéricos enquanto o driver traduz para a linguagem específica do componente[cite: 1].

* ⌨️ **Teclado:** Converte pressionamento de teclas em caracteres[cite: 1].
* 🖱️ **Mouse:** Mapeia movimento e cliques para a interface[cite: 1].
* 🌐 **Rede:** Gerencia pacotes e comunicação entre computadores[cite: 1].
* 💽 **Disco:** Controla as operações de leitura/escrita física de blocos[cite: 1].
* 🖨️ **Impressora:** Envia fluxos de impressões e interpreta linguagens como PostScript/PCL[cite: 1].

---

## ♻️ Adaptabilidade e Reutilização de Sistemas

Geralmente, novos dispositivos **não** desenvolvem um sistema operacional do zero. Eles adaptam kernels e estruturas consolidadas (ex: Linux ou BSD)[cite: 1].

### Vantagens do Reuso:
* 📉 Redução drástica nos custos de desenvolvimento[cite: 1].
* 🛡️ Maior estabilidade e segurança testadas na comunidade[cite: 1].
* 🔄 Reutilização de drivers, ferramentas e ecossistema existente[cite: 1].
* 🛠️ Atualizações contínuas de segurança[cite: 1].

### Exemplos Práticos:
* **🍓 Raspberry Pi:** Utiliza o *Raspberry Pi OS* (uma adaptação do **Debian Linux**)[cite: 1].
* **🎮 PlayStation 4:** Utiliza o *Orbis OS* (baseado no sistema **FreeBSD**)[cite: 1].

---

## 📝 Atividades da Aula

### 📌 Atividade 01: Markdown da Instalação do SO
* **Objetivo:** Descrever em formato Markdown o processo completo de formatação e instalação de um Sistema Operacional[cite: 1].
* **Detalhamento:** Explicar o que acontece em cada etapa, quais componentes do SO (Kernel, Sistema de Arquivos, Drivers) atuam e salvar o arquivo no repositório da disciplina[cite: 1].

### 📌 Atividade 02: Tabela Comparativa de Sistemas Derivados
* **Objetivo:** Pesquisar **5 Sistemas Operacionais** desenvolvidos a partir de outro sistema base (Kernel/Arquitetura)[cite: 1].
* **Detalhamento:** Criar uma tabela comparativa no arquivo `.md` destacando as diferenças entre o sistema derivado e o sistema original[cite: 1].

---

## 📚 Referências Bibliográficas
* TANENBAUM, A. S.; BOS, H. **Sistemas Operacionais Modernos**. 4. ed. Pearson, 2016[cite: 1].
* SILBERSCHATZ, A.; GALVIN, P. B.; GAGNE, G. **Fundamentos de Sistemas Operacionais**. 9. ed. LTC, 2015[cite: 1].
* STALLINGS, W. **Sistemas Operacionais: Conceitos e Projetos**. 8. ed. Pearson, 2015[cite: 1].
