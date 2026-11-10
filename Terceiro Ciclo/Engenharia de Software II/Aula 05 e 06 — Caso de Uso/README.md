# 🧩 Aula 05 e 06 — Caso de Uso

Depois de levantar os requisitos e prototipar as telas, a disciplina avança para o **diagrama de casos de uso**: a visão macro de como o usuário interage com o sistema, sem se preocupar com a forma como as funcionalidades serão executadas.

> **Disciplina:** Engenharia de Software II  
> **Tema:** Diagrama de casos de uso e documentação dos casos de uso

---

## 🎯 Objetivos da aula

- 🧭 Entender o que é um diagrama de casos de uso;
- 👤 Identificar atores e casos de uso a partir dos requisitos;
- 🔗 Representar associações, inclusões (`<<include>>`), extensões (`<<extend>>`) e generalizações;
- 📝 Documentar cada caso de uso passo a passo;
- 🖥️ Desenhar o diagrama no Astah.

---

## 🗺️ Mapa mental da aula

```text
                      🧩 Caso de Uso
                            │
        ┌──────────────┬────┴─────────┬──────────────┐
        │              │              │              │
   👤 Ator        🔵 Caso de uso  🔗 Relações   📝 Documentação
        │              │              │              │
   Pessoa, sensor  Ação do       Associação,     Fluxo principal,
   ou sistema      usuário       include, extend  alternativos,
                   (requisito)   e generalização  restrições
```

---

## 📖 1. Definição

De acordo com o livro *UML 2: Uma Abordagem Prática* (página 55), o diagrama de casos de uso **"tem por objetivo apresentar uma visão geral externa das funcionalidades que o sistema deverá oferecer aos usuários, sem se preocupar como as funcionalidades serão executadas"**.

Ou seja: pegue os requisitos, veja numa visão macro como o usuário irá interagir com o sistema e descreva **qual ação ele faz** e **se o sistema devolve alguma coisa para ele**.

---

## 🧱 2. Formas básicas de representação

| Elemento | O que é | Símbolo |
|---|---|---|
| **Ator** | Quem interage com o sistema: uma pessoa, um hardware ou outro software. | Boneco simples |
| **Caso de uso** | A ação que o usuário realiza com um requisito funcional. | Elipse (balão) |

### 👤 O ator

- É o sujeito que irá interagir com a tarefa;
- Pode ser uma pessoa, um hardware (ex.: sensor de temperatura) ou outro software;
- Exemplos: eu, você, nós, um sensor, um outro sistema que devolve algo ao sistema.

### 🔵 O caso de uso

- Representa a ação que o usuário possui com aquele requisito;
- O requisito funcional é representado por um balão (elipse).

---

## 🔗 3. Associações

É a forma de interação entre o **ator** e o **caso de uso**, representada por uma linha simples.

```text
  👤 Operador ─────────── ( Emitir nota fiscal )
```

---

## ⚙️ 4. Include (inclusão)

Usado quando um processo é **obrigatório** para que o processo principal funcione. A seta aponta para o requisito obrigatório.

- Símbolo: seta tracejada com a palavra `<<include>>` logo acima.

---

## ➕ 5. Extend (extensão)

São extensões de uma ação já existente, como uma alternativa ou uma condição para realizá-la. **Não são obrigatórias.**

- Símbolo: linha tracejada com seta apontando para o caso de uso que foi estendido, com a palavra `<<extend>>`.
- Exemplo clássico: no login, caso o usuário não tenha cadastro, pode-se oferecer o registro; o cadastro é uma extensão do login.

### ⚖️ Extend x Include

| | **Extend** | **Include** |
|---|---|---|
| **Obrigatório?** | Não | Sim |
| **Exemplo** | Login que estende para *Cadastrar usuário* | Pedido que exige um cliente |

---

## 🧬 6. Generalização / especialização / herança

Quando há características muito semelhantes, pode-se criar uma generalização derivada de dois ou mais casos de uso ou atores.

- Exemplo: clientes **físicos** e **jurídicos** possuem características comuns (endereço, documentos), então o processo de cadastro de cliente pode derivar dos dois.
- Outros exemplos: Homem/Mulher → Pessoa; Conta Poupança/Conta Corrente → Conta bancária; Carro/Caminhão → Veículos; Casa/Apartamento → Residência.

---

## 🧷 7. Restrições

Para uma documentação mais abrangente, pode-se registrar a restrição que ocorre numa extensão com um símbolo de **caixa com dobra no canto superior direito**, colocado logo acima da seta tracejada. Pode ser usada como um `if` para indicar cada caso de uso.

---

## 📍 8. Pontos de extensão

Segundo o livro *UML 2* (página 69), um ponto de extensão *"identifica um ponto no comportamento de um caso de uso, a partir do qual esse comportamento poderá ser estendido pelo comportamento do outro caso de uso"*.

- O símbolo é o mesmo do caso de uso;
- No Astah, basta clicar com o botão direito e adicionar um ponto de extensão.

---

## 🔢 9. Cardinalidade

Indica quantas vezes um determinado ator pode realizar aquela ação. Há um número que parte do ator e outro que parte do caso de uso.

- Exemplo: um operador pode registrar várias vendas (`1` no ator, `*` no caso de uso);
- Exemplo: o mesmo operador mantém somente uma conexão por vez (`1`).

---

## 🟦 10. Fronteiras do sistema

Delimitam um módulo, software ou conjunto de funcionalidades no diagrama, normalmente representados por um **retângulo** que envolve todas as funcionalidades. A definição de fronteiras costuma vir das regras de negócio da empresa, mas pode seguir noções como setores da empresa, sistemas diferentes interagindo ou tecnologias diferentes conversando.

---

## 🏷️ 11. Estereótipos

Quando há uma situação que não pode ser documentada como um processo ou como um requisito que gostaríamos de ter, ela pode ser declarada como um **estereótipo**, qualificando o processo com algum tipo.

- Símbolo: elipse com o rótulo `<<Recurso>>`, como em *Botão vermelho com bolinhas amarelas*.

---

## 📝 12. Documentação do caso de uso

Além do diagrama, cada caso de uso deve ser documentado para verificar o passo a passo de cada requisito que o originou. Modelo usado pelo professor até o TG:

| Campo | Conteúdo |
|---|---|
| **Nome do Caso de Uso** | Nome do caso de uso |
| **Ator Principal** | Ator principal do caso de uso |
| **Atores Secundários** | Atores envolvidos no processo |
| **Resumo** | Descrição geral da funcionalidade |
| **Pré-Condições** | O que ocorre antes do caso de uso iniciar |
| **Pós-Condições** | Situação após a execução |
| **Fluxo Principal** | Ações dos atores × Ações do sistema, de forma sequencial |
| **Restrições/Validações** | Regras de validação, exceções e restrições |
| **Fluxo Alternativo I** | Alternativas (ex.: registrar operador caso não exista) |
| **Fluxo Alternativo II** | Outras alternativas, se houver |

---

## 📂 Materiais disponíveis

| Arquivo | O que apresenta |
|---|---|
| [📕 atividade05-caso_e_usoBanco.pdf](atividade05-caso_e_usoBanco.pdf) | Diagrama de casos de uso do sistema bancário e a documentação de cada caso de uso. |
| [📕 atividade06-caso_e_usoOdonto.pdf](atividade06-caso_e_usoOdonto.pdf) | Diagrama de casos de uso do sistema odontológico e a documentação de cada caso de uso. |

---

## 📝 Atividade da aula

- **Aplicativo bancário:** desenvolver o diagrama de casos de uso incluindo inclusão, extensão, pontos de extensão, cardinalidades e restrições.
- **Projeto do semestre (odontológico):** concluir o diagrama de casos de uso com todos os elementos abordados em aula, usando o Astah, e documentar cada caso de uso no modelo apresentado.

---

## 📚 Referências

- GUEDES, G. T. A. *UML 2: Uma Abordagem Prática*. Novatec. (Capítulo sobre diagrama de caso de uso; páginas 55 e 69.)
- LARMAN, C. *Utilizando UML e Padrões*. Bookman. (Capítulo 6, páginas 87–126.)
- PAULA FILHO, W. P. *Engenharia de Software: Fundamentos, Métodos e Padrões*. LTC.

---

[← Aula 03 e 04](../Aula%2003%20e%2004%20%E2%80%94%20Prototipa%C3%A7%C3%A3o/README.md) · [📚 Índice da disciplina](../README.md)
