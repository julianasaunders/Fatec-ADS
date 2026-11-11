# 🔍 Atividade 02: Pesquisa e Análise Comparativa de Sistemas Operacionais Derivados
**Disciplina:** Estrutura e Arquitetura de Sistemas Operacionais  
**Professor:** Prof. Me. Deivison S. Takatu  
**Instituição:** Fatec - Faculdade de Tecnologia  

---

## 📌 Introdução

Assim como visto em aula com exemplos como o **Raspberry Pi OS** (baseado em *Debian Linux*) e o **Orbis OS** do PlayStation 4 (baseado em *FreeBSD*), a imensa maioria dos sistemas operacionais modernos não é desenvolvida do zero. Projetar um novo SO exige um esforço colossal de desenvolvimento, teste de drivers, garantia de estabilidade e segurança.

Ao reaproveitar bases sólidas existentes (como o Kernel Linux, BSD ou a arquitetura do Android), desenvolvedores e empresas conseguem focar nas otimizações específicas para o seu nicho de mercado (dispositivos móveis, smart TVs, consoles ou privacidade).

---

## 📱 1. Identificação de 5 Sistemas Operacionais Derivados

Para esta pesquisa, foram selecionados 5 Sistemas Operacionais que utilizam o kernel, a arquitetura ou a base estrutural de outros sistemas consolidados:

1. **Android** 📱 (Baseado no **Kernel Linux**)
2. **macOS** 💻 (Baseado no **Darwin / XNU / FreeBSD / Mach**)
3. **Ubuntu** 🐧 (Baseado no **Debian GNU/Linux**)
4. **webOS** 📺 (Baseado no **Kernel Linux**)
5. **SteamOS** 🎮 (Baseado no **Arch Linux** — *a partir da versão 3.0*)

---

## 📊 2. Tabela Comparativa: Sistema Derivado vs. Sistema Base

A tabela a seguir apresenta as principais diferenças, modificações e focos de uso entre o sistema desenvolvido e a sua respectiva base:

| Sistema Derivado | Sistema Base | Principais Diferenças e Modificações | Foco de Aplicação / Objetivo |
| :--- | :--- | :--- | :--- |
| **Android** | **Kernel Linux** | Substituiu as bibliotecas padrão do Linux (GNU C / glibc) por soluções próprias (Bionic, Android Runtime/ART). Não utiliza a interface de janelas padrão do Linux (X11/Wayland), utilizando o *SurfaceFlinger*. | Smartphones, tablets, TVs e dispositivos embarcados voltados para toque e consumo de bateria eficiente. |
| **macOS** | **Darwin (FreeBSD / Mach)** | Adiciona uma camada proprietária por cima do núcleo código aberto Darwin, incluindo a interface gráfica **Aqua**, APIs de desenvolvimento (*Cocoa/Metal*) e ecossistema fechado de software e segurança Apple. | Computadores e notebooks da Apple (MacBook, iMac, Mac Studio) focados em produtividade, design e desempenho. |
| **Ubuntu** | **Debian GNU/Linux** | Utiliza o repositório do Debian como base, mas possui um ciclo de lançamentos fixo (a cada 6 meses), interface customizada (GNOME modificada), utilitários próprios de configuração e suporte a pacotes *Snap*. | Desktops corporativos/pessoais, servidores de nuvem e contêineres com foco em facilidade de uso e atualização regular. |
| **webOS** | **Kernel Linux** | Mantém o kernel Linux para gerenciamento de hardware, mas constrói toda a sua pilha de interface gráfica sobre tecnologias web (HTML5, CSS, JS e Node.js/Qt) com a interface *Card UI*. | Smart TVs (LG), geladeiras inteligentes e dispositivos de IoT com foco em navegação ágil por controle/ponteiro. |
| **SteamOS 3.0** | **Arch Linux** | Mudou a base do Debian para Arch Linux para obter pacotes de drivers de vídeo mais recentes (*rolling release*). Adiciona o *Gamescope* (compositor de tela), sistema de arquivos somente leitura (*immutable root*) e modo jogo integrado com a interface da Steam. | Consoles portáteis de jogos (Steam Deck) e computadores focados em execução de jogos PC via camada de compatibilidade *Proton*. |

---

## 💡 3. Conclusão

A pesquisa evidencia que o reaproveitamento de arquiteturas e kernels consolidados é uma prática padrão na indústria de tecnologia. Esse modelo oferece vantagens críticas:

* 📉 **Redução de Custos e Tempo:** Evita a reinvenção da roda para gerenciamento de memória, processos e escalonamento de CPU.
* 🛡️ **Segurança e Estabilidade:** O kernel base já passou por anos de testes, correções de bugs e auditorias de milhares de desenvolvedores.
* 🔌 **Ecossistema de Drivers:** Aproveita o suporte nativo a milhares de dispositivos de hardware já existente no kernel base (especialmente no caso do Linux).
