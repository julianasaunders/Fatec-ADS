# 📘 Manual Prático: Instalação do Oracle VirtualBox e Criação de VM com Linux
**Disciplina:** Estrutura e Arquitetura de Sistemas Operacionais  
**Professor:** Prof. Me. Deivison S. Takatu  
**Instituição:** Fatec - Faculdade de Tecnologia  

---

## 🎯 Objetivo

Este manual descreve o processo passo a passo para:
1. Instalação do **Oracle VirtualBox** em um ambiente *Host*.
2. Download e configuração de uma máquina virtual (VM) utilizando uma distribuição Linux leve (**Tiny Core Linux** / **Lubuntu**).
3. Teste do sistema operacional virtualizado e validação do ambiente.

---

## 🛠️ Prerequisitos e Hardware Utilizado

* **Sistema Hospedeiro (Host):** Windows 10 / Windows 11 (64-bit)
* **Virtualizador:** Oracle VirtualBox (versão 7.0 ou superior)
* **Imagem ISO Utilizada:** `TinyCore-current.iso` (~23 MB) ou `Lubuntu-22.04-LTS.iso`
* **Recursos Mínimos da Máquina Física:**
  * Processador com suporte a Virtualização (VT-x / AMD-V) ativado na BIOS/UEFI.
  * Mínimo de 4 GB de RAM livre.

---

## 💻 1. Instalação do Oracle VirtualBox

1. Acesse o site oficial do [VirtualBox](https://www.virtualbox.org/) e faça o download do instalador da versão mais recente para o seu SO *Host*.
2. Execute o instalador baixado (`VirtualBox-x.x.x-Win.exe`).
3. Siga o assistente de instalação (*Next* -> *Next* -> *Install*), mantendo os componentes padrão selecionados.
4. Caso surja o aviso sobre a reinicialização temporária da interface de rede, clique em **Yes**.
5. Ao concluir, clique em **Finish** e abra o Oracle VirtualBox.

---

## ⚙️ 2. Criação da Máquina Virtual no VirtualBox

Com a interface do VirtualBox aberta, siga o procedimento:
```
┌─────────────────────────────────────────────────────────────┐
│                   Passos de Criação da VM                   │
│                                                             │
│ 1. [ Novo ] ──> 2. [ Nome & ISO ] ──> 3. [ RAM & CPU ]     │
│                         │                                   │
│                         ▼                                   │
│            4. [ Disco Virtual (VDI) ]                       │
└─────────────────────────────────────────────────────────────┘
```

1. **Início:** Clique no botão **Novo** (*New*) no menu superior.
2. **Identificação da VM:**
   * **Nome:** `Soft-Linux`
   * **Pasta:** Mantenha o diretório padrão sugerido pelo sistema.
   * **Imagem ISO:** Selecione o arquivo `.iso` baixado previamente.
   * **Tipo:** `Linux`
   * **Versão:** `Other Linux (64-bit)` ou `Ubuntu (64-bit)` (caso use Lubuntu/Xubuntu).
3. **Hardware (RAM e Processador):**
   * **Memória RAM:** Aloque **1024 MB** (1 GB) para o Tiny Core ou **2048 MB** (2 GB) para o Lubuntu.
   * **Processadores:** Aloque **1 vCPU** (suficiente para distros minimalistas).
4. **Disco Rígido Virtual:**
   * Selecione **Criar um disco rígido virtual agora**.
   * Tamanho: **8 GB** (Tiny Core) ou **25 GB** (Lubuntu).
   * Formato de disco: **VDI (VirtualBox Disk Image)**.
   * Alocação: **Dinamicanente alocado** (ocupa espaço no disco físico apenas conforme é utilizado).
5. **Finalização:** Clique em **Criar** (*Finish*).

---

## 💿 3. Montagem da Mídia ISO e Inicialização

Se a ISO não foi associada na etapa anterior:

1. Selecione a VM `Soft-Linux` na lista à esquerda e clique em **Configurações** (*Settings*).
2. Vá até a aba **Armazenamento** (*Storage*).
3. Em *Dispositivos de Armazenamento*, clique no ícone do disco sob o controlador SATA/IDE que exibe **Vazio** (*Empty*).
4. No painel direito, clique no ícone de disco óptico e selecione **Escolher um arquivo de disco...**.
5. Localize e selecione o arquivo `.iso` do Linux.
6. Clique em **OK** para salvar as alterações.

---

## 🚀 4. Execução e Instalação do Sistema Convidado (Guest)

1. No painel do VirtualBox, selecione a VM e clique em **Iniciar** (*Start*).
2. A janela da máquina virtual será aberta e executará o boot da mídia ISO.
```
+-------------------------------------------------------------+
|                  Janela da VM (Guest)                       |
|                                                             |
|  Booting TinyCore Linux / Lubuntu Installer...              |
|  [ Autodetecting Hardware... ]                              |
|  [ Loading Kernel & RAMDisk... ]                            |
|                                                             |
|  -> Acessando o Ambiente Gráfico (GUI)                      |
+-------------------------------------------------------------+
```

3. **Para Tiny Core Linux:**
   * O sistema iniciará direto na memória RAM exibindo a barra de tarefas no rodapé (*FLWM Desktop*).
   * Abra o aplicativo de terminal ou gerenciador de pacotes (*Apps*) para validar o funcionamento.
4. **Para Lubuntu / Xubuntu:**
   * Clique no ícone de atalho na área de trabalho **Instalar o Sistema**.
   * Siga o assistente selecionando o idioma, fuso horário, layout do teclado e partição do disco virtual.
   * Crie o usuário inicial e aguarde a conclusão da gravação no disco.
   * Ao finalizar, desmonte a ISO das configurações e reinicie a VM.

---

## ✅ 5. Validação e Teste do Sistema Virtualizado

Para certificar que o ambiente virtualizado está operando corretamente, foram realizados os seguintes testes dentro do sistema convidado:

| Teste | Comando / Ação Executada | Resultado Esperado | Status |
| :--- | :--- | :--- | :---: |
| **Integridade do Kernel** | `uname -a` | Exibir a versão do Kernel Linux ativo. |  OK |
| **Uso de Memória** | `free -h` | Confirmar que a RAM alocada está disponível e funcional. |  OK |
| **Conectividade** | `ping -c 4 google.com` | Validar a placa de rede emulada (Modo NAT) e acesso à internet. |  OK |
| **Interface Gráfica** | Abertura do Terminal / Navegador | Navegação e renderização de janelas sem travamentos. |  OK |

---

## 💡 Conclusão

O processo de virtualização via **Oracle VirtualBox** permitiu a criação de um ambiente seguro e i
