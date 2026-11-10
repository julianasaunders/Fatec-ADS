# 🐉 Kali Linux - Resumo

## 📌 O que é o Kali?
- Distribuição Linux baseada em **Debian**  
- Voltada para **auditoria de segurança**, **pentest** e **perícia digital**  
- Lançado em **2013** pela **Offensive Security** como sucessor do BackTrack  
- Inclui centenas de ferramentas pré-instaladas para:
  - 🔍 Forense computacional  
  - 🔧 Engenharia reversa  
  - 🛡️ Detecção de vulnerabilidades  

---

## 🛠️ Principais Ferramentas

### 🔎 Reconhecimento e Redes
- **Nmap, Wireshark**  
- Mapear redes, descobrir portas abertas, capturar tráfego.  
- Exemplo: em um Wi-Fi aberto, é possível capturar dados não criptografados.  

### ⚠️ Análise de Vulnerabilidades
- **OpenVAS, Nikto**  
- Escanear sistemas e servidores web em busca de falhas conhecidas.  
- Exemplo: um Windows Server desatualizado pode ser invadido.  

### 🔐 Quebra de Senhas
- **John the Ripper, Hydra, Hashcat**  
- Testes de força bruta e descriptografia de hashes.  
- Exemplo: invasor testando senhas de Wi-Fi rapidamente.  

### 🕵️ Navegação Anônima
- **Tor Browser**  
- Criptografia em camadas para privacidade e anonimato.  
- Exemplo: usado para acessar a Deep Web com segurança.  

---

## 💻 Requisitos de Sistema

| Recurso | Mínimo (CLI) | Recomendado (GUI) |
|---------|--------------|-------------------|
| **CPU** | 1 núcleo (2.0 GHz) | 2 a 4 núcleos |
| **RAM** | 512 MB a 1 GB | 4 GB a 8 GB |
| **Armazenamento** | 20 GB | 40 a 80 GB (SSD) |
| **Interface** | Nenhuma | Xfce / GNOME / KDE |

---

## ⚙️ Instalação em Máquina Virtual
1. 📥 Baixar do site oficial [kali.org](https://www.kali.org)  
2. 📦 Importar no **VirtualBox** ou **VMware**  
3. ⚡ Ajustar CPU, RAM e rede  
4. 🔑 Login padrão: `kali / kali`  
5. 🔄 Instalar utilitários de integração (open-vm-tools, guest-x11)  
6. 🗂️ Criar snapshot inicial e atualizar:  
   ```bash
   sudo apt update && sudo apt upgrade -y
