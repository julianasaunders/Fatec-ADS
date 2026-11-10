# 💻 Resumo: Introdução à Virtualização
**Disciplina:** Sistemas Operacionais  
**Professor:** Prof. Me. Deivison S. Takatu (`deivison.takatu@fatec.sp.gov.br`)  
**Instituição:** Fatec - Faculdade de Tecnologia  

---

## 🌐 1. O que é Virtualização?

A **Virtualização** é uma tecnologia que permite executar múltiplos sistemas operacionais de forma simultânea e isolada em um único computador físico (hardware).
```
+-------------------------------------------------------------+
|                 SISTEMA OPERACIONAL (VM 1)                  |
+-------------------------------------------------------------+
|                 SISTEMA OPERACIONAL (VM 2)                  |
+-------------------------------------------------------------+
|                  HYPERVISOR (VIRTUALBOX)                    |
+-------------------------------------------------------------+
|               SISTEMA HOSPEDEIRO / HARDWARE                 |
+-------------------------------------------------------------+
```

### 🎯 Princípio & Aplicações
* **Princípio:** Cria ambientes completamente isolados que simulam hardware real, permitindo testes e execuções seguras sem afetar o sistema operacional principal.
* **Aplicações:** Laboratórios de testes, ambientes de desenvolvimento de software, servidores corporativos e ambientes de produção.

---

## ⚡ 2. Vantagens da Virtualização

| Vantagem | Descrição |
| :--- | :--- |
| 💸 **Economia de Hardware** | Reduz custos ao consolidar múltiplos servidores em uma única máquina física, eliminando o desperdício de recursos ociosos. |
| 🛡️ **Isolamento Seguro** | Permite executar softwares não testados sem o risco de comprometer o sistema operacional principal. |
| ⏱️ **Facilidade para Testes** | Permite criação rápida de *snapshots* (capturas de estado) e recuperação instantânea em caso de falhas. |
| 🐧 **Múltiplos Sistemas** | Permite rodar simultaneamente sistemas como Windows, distribuições Linux e macOS no mesmo equipamento. |
| 📦 **Portabilidade Absoluta** | Possibilita empacotar configurações complexas em arquivos únicos e distribuí-los facilmente entre diferentes computadores. |

---

## ⚙️ 3. O Hypervisor e os Conceitos de Arquitetura

O **Hypervisor** é a camada de software responsável por criar, gerenciar e executar as Máquinas Virtuais (VMs).

### 🛠️ Funções Principais do Hypervisor:
1. Distribuir tempo de CPU e alocação de memória RAM.
2. Gerenciar e emular dispositivos virtuais (disco, rede, vídeo).
3. Garantir o isolamento estrito entre as máquinas virtuais.
4. Controlar a mediação de acesso ao hardware físico.

---

### 🧩 Papéis na Arquitetura de Virtualização

[ Sistema Hospedeiro (Host) ] ---> [ Hypervisor / VirtualBox ] ---> [ Sistema Convidado (Guest) ]


* 🖥️ **Sistema Hospedeiro (*Host*):** É o sistema operacional principal instalado diretamente no hardware físico do computador (ex: Windows 11).
* 🔄 **Camada de Virtualização:** O Hypervisor rodando no *Host* para simular componentes de hardware para as VMs.
* 💻 **Sistema Convidado (*Guest*):** É o sistema operacional executado **dentro** da máquina virtual isolada (ex: Ubuntu Linux rodando dentro do Windows).

---

## 📦 4. Oracle VirtualBox & Exemplo de SO

O **Oracle VirtualBox** é uma das ferramentas de virtualização mais populares do mercado:
* **Características:** Gratuito, *open-source* (para uso pessoal/educacional) e multiplataforma (funciona em Windows, Linux, macOS e Solaris).
* **Interface:** Possui painel principal de gerenciamento, configurações de hardware virtual (RAM, CPU, discos), gerenciador de mídias/ISO e adaptadores de rede.

---

### 🪶 Exemplo de SO Leve: Tiny Core Linux

O **Tiny Core Linux** é uma distribuição Linux minimalista amplamente utilizada em testes e ambientes virtualizados devido ao seu baixíssimo consumo de recursos.

| Versão | Tamanho da ISO | Recursos / Descrição |
| :--- | :--- | :--- |
| **Core** | ~17 MB | Sistema base em linha de comando (CLI). Ideal para servidores e appliances minimalistas. |
| **TinyCore** | ~23 MB | Inclui o sistema base + extensão gráfica (GUI FLTK/FLWM) e suporte a rede cabeada. |
| **CorePlus** | ~248 MB | Imagem completa de instalação com suporte a Wi-Fi, layouts de teclado não-US e 7 gerenciadores de janelas. |

---

## 🛠️ 5. Passo a Passo: Criando e Instalando uma VM
```
┌──────────────────┐     ┌──────────────────┐     ┌──────────────────┐     ┌──────────────────┐
│  1. Obter ISO    │ ──> │ 2. Criar a VM    │ ──> │ 3. Montar a ISO  │ ──> │  4. Boot & Install│
│ (Download do SO) │     │ (RAM, CPU, VHD)  │     │ (Drive Virtual)  │     │ (Instalação)     │
└──────────────────┘     └──────────────────┘     └──────────────────┘     └──────────────────┘
```

1. **Obter a Imagem ISO:** Fazer o download do arquivo `.iso` do sistema desejado (ex: Tiny Core, Lubuntu, Xubuntu).
2. **Criar a Máquina Virtual:** No VirtualBox, clicar em **Nova**, definir o nome, tipo do SO, alocar memória RAM (ex: 2048 MB) e criar um Disco Rígido Virtual (VHD/VDI).
3. **Montar a ISO:** Nas configurações de **Armazenamento** da VM, anexar o arquivo `.iso` no drive óptico virtual.
4. **Iniciar e Instalar:** Clicar em **Iniciar** para bootar a VM a partir da ISO e seguir o assistente de instalação normal do sistema.

---

## 📝 6. Atividades da Aula

### 📌 Atividade Prática (Manual de Instalação)
* **Objetivo:** Instalar o Oracle VirtualBox no computador e criar uma máquina virtual utilizando uma distribuição Linux leve (ex: *Tiny Core*, *Lubuntu* ou *Xubuntu*).
* **Entregável:** Testar o sistema virtualizado e documentar todo o processo de criação/configuração em formato de **Manual Markdown (`.md`)**, salvando-o no repositório da disciplina.

---

## 📚 Referências Bibliográficas
* TANENBAUM, A. S.; BOS, H. **Sistemas Operacionais Modernos**. 4. ed. São Paulo: Pearson, 2016.
* SILBERSCHATZ, A.; GALVIN, P. B.; GAGNE, G. **Fundamentos de Sistemas Operacionais**. 9. ed. Rio de Janeiro: LTC, 2015.
* STALLINGS, W. **Sistemas Operacionais: Conceitos e Projetos**. 8. ed. São Paulo: Pearson, 2015.
