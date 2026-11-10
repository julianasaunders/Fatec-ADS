# 📚 Resumo de Aula: Conceitos, Funções e Tipos de Sistemas Operacionais e Git

**🏫 Instituição:** Fatec - Faculdade de Tecnologia  
**👨‍🏫 Professor:** Prof. Me. Deivison S. Takatu (`deivison.takatu@fatec.sp.gov.br`)  

---

## 1. 💻 Tipos de Sistemas Operacionais

Os Sistemas Operacionais variam conforme o hardware, finalidade e recursos computacionais disponíveis.

| Tipo de SO 🖥️ | Foco / Características Principais ⚡ | Exemplos Práticos 📌 |
| :--- | :--- | :--- |
| **Mainframes (Grande Porte)** | Alta capacidade de E/S, processamento em lote e tempo compartilhado. Foco em segurança e disponibilidade. | OS/360, OS/390, Linux em mainframe |
| **Servidores** | Atendimento a múltiplos usuários em rede (web, banco de dados, arquivos). Alta estabilidade e escalabilidade. | Linux, Windows Server |
| **Multiprocessadores** | Suporte a múltiplas CPUs/núcleos. Requer escalonamento eficiente e sincronização (*race conditions*). | Supercomputadores, servidores de alta performance |
| **Computadores Pessoais** | Uso individual, interface gráfica (GUI), usabilidade e ampla compatibilidade de software. | Windows, macOS, Linux |
| **Portáteis / Móveis** | Gerenciamento agressivo de bateria, APIs de sensores (GPS, acelerômetro), segurança via permissões/*sandboxing*. | Android, iOS |
| **Sistemas Embarcados** | Dispositivos dedicados com recursos limitados. Software armazenado em ROM/Flash. | Embedded Linux, QNX, VxWorks (Carros, Smart TVs) |
| **Nós Sensores** | Dispositivos minúsculos, alimentados por bateria, orientados a eventos e com comunicação sem fio leve. | TinyOS, Contiki |
| **Tempo Real (Real-Time)** | **Hard:** Perder prazo pode causar desastres.<br>**Soft:** Perder prazo causa apenas degradação na qualidade. | Controle de voo (*Hard*) / Streaming de vídeo (*Soft*) |
| **Cartões Inteligentes** | Ambiente ultra-restrito. Foco em criptografia, autenticação e proteção contra ataques físicos. | Cartões bancários com chip, SIM cards |

---

## 2. 🐙 Controle de Versão com Git

### 2.1 O que é o Git? 🛠️
O **Git** é um sistema distribuído de controle de versão criado por *Linus Torvalds*. Ele permite registrar o histórico de edições do código, reverter a versões anteriores e colaborar em equipe via repositórios remotos (ex: GitHub).

### 2.2 Comandos Iniciais Importantes ⚙️

| Comando | Descrição |
| :--- | :--- |
| `git --version` | Verifica se o Git está instalado corretamente |
| `git config --global user.name "Seu Nome"` | Define o nome de autor para os *commits* |
| `git config --global user.email "seu@email.com"` | Define o e-mail vinculado ao histórico |

### 2.3 Fluxo Prático no VS Code 🔄

[1. Criar Arquivo] ➔ [2. git init] ➔ [3. Stage & Commit] ➔ [4. Publicar no GitHub]


1. 📂 **Criar e Abrir Pasta:** Abra uma pasta no VS Code e adicione arquivos do seu projeto.
2. 🚀 **Inicializar Repositório:** Acesse a aba *Source Control* (Controle de Código-Fonte) e clique em **Inicializar Repositório** (`git init`).
3. 📌 **Realizar Commit:** Mova as alterações para a área de preparação (*stage*), digite uma mensagem clara e confirme o commit.
4. 🌐 **Publicar no GitHub:** Clique em **Publicar Branch** para conectar à sua conta remota e sincronizar os arquivos.

### 2.4 Boas Práticas no Versionamento 💡
* 🧩 **Commits Pequenos:** Mantenha o histórico granulado facilitando a identificação e correção de falhas.
* ✍️ **Mensagens Claras:** Descreva o *que* foi modificado e o *porquê* (ex: `fix: corrige falha no envio do formulário`).
* 🌿 **Uso de Branches:** Mantenha a branch principal (`main`) estável e crie branches paralelas para desenvolver novas *features*.

---

## 3. 📝 Atividades Práticas Propostas

| Nº 🎯 | Atividade 📋 | Objetivo 🔍 |
| :---: | :--- | :--- |
| **1** | **Integração IDE + GitHub** | Configurar a autenticação na IDE (VS Code) e validar operações de `commit`, `push` e `pull`. |
| **2** | **Ciclo de Vida & Clone** | Criar um projeto, sincronizar com o GitHub, excluir a pasta local e restaurá-lo via `git clone`. |
| **3** | **Exploração Open Source** | Buscar 5 projetos públicos no GitHub, cloná-los localmente e analisar sua estrutura de arquivos. |

---

## 4. 📚 Referências Bibliográficas

* TANENBAUM, Andrew S.; BOS, Herbert. **Sistemas Operacionais Modernos**. 4. ed. Pearson, 2016.
* SILBERSCHATZ, Abraham; GALVIN, Peter B.; GAGNE, Greg. **Fundamentos de Sistemas Operacionais**. 9. ed. LTC, 2015.
* STALLINGS, William. **Sistemas Operacionais: Conceitos e Projetos**. 8. ed. Pearson, 2015.
* DENARDIN, G. W.; BARRIQUELLO, C. H. **Sistemas Operacionais de Tempo Real e sua Aplicação em Sistemas Embarcados
