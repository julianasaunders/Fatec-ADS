# ☁️ Resumo: Nuvem e Sistemas Operacionais
**Disciplina:** Sistemas Operacionais  
**Professor:** Prof. Me. Deivison S. Takatu (`deivison.takatu@fatec.sp.gov.br`)  
**Instituição:** Fatec - Faculdade de Tecnologia  

---

## 📌 1. Fundamentos da Computação em Nuvem (Cloud Computing)

A transição da infraestrutura física tradicional para a computação em nuvem representa uma mudança de paradigma: a substituição de ativos físicos locais (**CAPEX**) por serviços contratados sob demanda (**OPEX**), reduzindo despesas operacionais e garantindo maior agilidade.
```
+-------------------------------------------------------------+
|                     COMPUTAÇÃO EM NUVEM                     |
+-------------------------------------------------------------+
│             │                  │                 │
▼             ▼                  ▼                 ▼
Acesso sob    Rede de            Pool de          Mensuração
Demanda     Acesso Amplo       Recursos          Automática
(Instantâneo) (Qualquer disp.)   (Multi-tenant)    (Pay-per-use)
```

### 📋 Características Essenciais (Modelo NIST)
* **Autoatendimento sob demanda:** O provisionamento de recursos ocorre sem intervenção humana com o fornecedor.
* **Amplo acesso à rede:** Mecanismos padronizados de acesso via Internet através de telemóveis, computadores portáteis e estações de trabalho.
* **Pool de recursos (*Multi-tenant*):** Recursos físicos e virtuais partilhados dinamicamente entre múltiplos utilizadores.
* **Elasticidade rápida:** Capacidade de escalar ou desprovisionar capacidade computacional de forma ágil mediante a necessidade.
* **Serviço mensurável:** Monitorização detalhada e tarifação estritamente sobre os recursos consumidos (*pay-per-use*).

---

## ⚙️ 2. Virtualização como Pilar e Alta Disponibilidade

O Sistema Operacional é a camada fundamental que abstrai o hardware. A virtualização viabiliza a criação de múltiplos ambientes isolados sobre o mesmo servidor físico, otimizando o consumo de infraestrutura.

* **Hardware Físico:** CPU, RAM, barramentos e controladores de rede.
* **Hypervisor (VMM):** Software de abstração (ex.: VMware ESXi, KVM) responsável por criar e coordenar as máquinas virtuais.
* **Máquinas Virtuais (VMs):** Instâncias independentes com o seu próprio SO e aplicações.

### 🛡️ Pilares da Alta Disponibilidade em Nuvem
1. **Zonas de Disponibilidade (AZs):** Datacenters distintos e isolados dentro de uma mesma região com redes e alimentação redundantes.
2. **Balanceamento de Carga (*Load Balancer*):** Distribuição equilibrada do tráfego entre diferentes instâncias.
3. **Replicação de Dados:** Mecanismos de escrita síncrona entre datacenters para prevenir perdas de integridade.
4. **Failover Automático:** Desvio automático de requisições de nós avariados para instâncias saudáveis.

---

## 🏗️ 3. Modelos de Serviço em Nuvem

| Modelo | Nome Completo | O que o Provedor gere? | O que o Cliente gere? | Exemplos Práticos |
| :--- | :--- | :--- | :--- | :--- |
| **IaaS** | *Infrastructure as a Service* | Hardware, rede, armazenamento e virtualização. | Sistema Operacional, middleware, runtime e aplicações. | AWS EC2, Azure VMs, Google Compute Engine. |
| **PaaS** | *Platform as a Service* | Hardware, rede, SO, drivers, atualizações e runtime. | Apenas o código-fonte da aplicação e dados. | Google App Engine, Heroku, Render, AWS Elastic Beanstalk. |
| **SaaS** | *Software as a Service* | Toda a infraestrutura, suporte, código e segurança. | Apenas consome as funcionalidades através da web. | Microsoft 365, Google Workspace, Slack, Salesforce. |

---

## 🌐 4. Modelos de Implantação e Provedores

* **Nuvem Pública:** Infraestrutura partilhada mantida por grandes provedores (AWS, Microsoft Azure, Google Cloud Platform, Oracle Cloud) com escalabilidade massiva.
* **Nuvem Privada:** Estrutura dedicada exclusivamente a uma entidade organizacional única, mantida *on-premise* ou em instalações de colocation.
* **Nuvem Híbrida:** Integração orquestrada entre infraestruturas privadas e públicas, mantendo cargas de trabalho críticas isoladas e absorvendo picos na nuvem pública.

### ⚖️ Vantagens versus Desafios

| Vantagens 🚀 | Desafios ⚠️ |
| :--- | :--- |
| Redução expressiva de CAPEX em prol de OPEX | Risco de aprisionamento tecnológico (*Vendor lock-in*) |
| Escalabilidade e elasticidade automáticas | Conformidade regulatória complexa (ex.: LGPD, GDPR) |
| Resiliência geográfica e alta disponibilidade | Despesas operacionais não planeadas sem governança (*FinOps*) |
| Facilidade de inovação contínua com IA e Big Data | Latência acrescida de comunicação de rede |

> **Modelo de Responsabilidade Compartilhada:** O fornecedor assegura a segurança **da** infraestrutura física da nuvem; o cliente assegura a segurança **na** nuvem (configurações, acessos, dados e aplicações).

---

## 📦 5. Containers e Microsserviços

Ao contrário das Máquinas Virtuais tradicionais (que exigem um SO Convidado completo para cada instância), os **Containers** empacotam o binário da aplicação e as suas dependências partilhando diretamente o **Kernel do SO hospedeiro**.
```
+-------------------------------------------------------------+
|                      APLICAÇÃO A | B                        |
+-------------------------------------------------------------+
|                 MOTOR DE CONTAINERS (DOCKER)                |
+-------------------------------------------------------------+
|                 SISTEMA OPERACIONAL / KERNEL                |
+-------------------------------------------------------------+
|                           HARDWARE                          |
+-------------------------------------------------------------+
```

* **Docker:** Plataforma padrão para criação, gestão e transporte de containers isolados e leves.
* **Kubernetes:** Ferramenta responsável pela orquestração, alta disponibilidade e auto-scaling dos containers.
* **Microsserviços:** Estruturação arquitetural de software distribuído em componentes de finalidade única integrados por APIs REST.

---

📚 Referências Bibliográficas
TANENBAUM, Andrew S.; BOS, Herbert. Sistemas Operacionais Modernos. 4. ed. São Paulo: Pearson, 2016.

SILBERSCHATZ, Abraham; GALVIN, Peter B.; GAGNE, Greg. Fundamentos de Sistemas Operacionais. 9. ed. Rio de Janeiro: LTC, 2015.

STALLINGS, William. Sistemas Operacionais: Conceitos e Projetos. 8. ed. São Paulo: Pearson, 2015.
