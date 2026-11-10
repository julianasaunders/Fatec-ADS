# 📚 Resumo de Aula: Revisão de Estruturas Condicionais e Lógica de Programação

---

## 🎯 Conteúdo da Aula
1. **Revisão da Aula Anterior**: Conceitos básicos, entrada/processamento/saída, variáveis e operadores.
2. **Teste de Mesa**: Verificação de algoritmos.
3. **Estruturas Condicionais**: Tomada de decisão em código (`if` / `else`).
4. **Operadores Lógicos**: Conectivos lógicos (`E`, `OU`, `NÃO`).
5. **Desafio Prático**: Exercício de fixação.

---

## 1. 🔄 Revisão de Conceitos Básicos

### 🧠 Arquitetura Básica & Analogia
A computação funciona em três fases sequenciais:

┌─────────────────┐       ┌─────────────────┐       ┌─────────────────┐│     ENTRADA     │ ───►  │  PROCESSAMENTO  │ ───►  │      SAÍDA      ││  (ex: Teclado)  │       │ (ex: Processador)│       │   (ex: Tela)    │└─────────────────┘       └─────────────────┘       └─────────────────┘
* **💡 Analogia do Gaveteiro**: A memória do computador funciona como um conjunto de gavetas. Cada gaveta possui um **nome** (identificador da variável) e um **conteúdo** (valor armazenado).
  * Exemplo: Gaveta chamada `nome` guarda a informação `"Adriano"`.

---

### ➕ Operadores Aritméticos
Servem para realizar cálculos matemáticos no código:

| Símbolo | Operação | Exemplo / Descrição |
| :---: | :--- | :--- |
| `+` | Adição | Soma de valores |
| `-` | Subtração | Subtração de valores |
| `*` | Multiplicação | Multiplicação |
| `/` | Divisão | Divisão tradicional |
| `**` | Potenciação | Elevação de um número a uma potência |
| `%` | Módulo | Resto da divisão inteira |

---

### 📝 Operadores de Atribuição
Atribuem um valor à variável à esquerda. Podem ser simples ou compostos:

| Símbolo | Operação | O que faz na prática |
| :---: | :--- | :--- |
| `=` | Atribuição simples | `x = 5` (atribui 5 a x) |
| `+=` | Atribuição com soma | `x += 3` (equivale a `x = x + 3`) |
| `-=` | Atribuição com subtração | `x -= 2` (equivale a `x = x - 2`) |
| `*=` | Atribuição com multiplicação | `x *= 4` (equivale a `x = x * 4`) |
| `/=` | Atribuição com divisão | `x /= 2` (equivale a `x = x / 2`) |
| `%=` | Atribuição com módulo | `x %= 3` (equivale a `x = x % 3`) |
| `.=` | Atribuição com concatenação | Concatena texto/string |

---

## 🧪 2. Teste de Mesa

> 📌 **Conceito**: O **Teste de Mesa** é o processo de executar as instruções do algoritmo manualmente (passo a passo), acompanhando o valor das variáveis para verificar se o procedimento está correto antes de colocar em produção.

---

## 🛣️ 3. Estruturas Condicionais (Tomada de Decisão)

Na vida real (e nos programas), o caminho nem sempre é reto e direto. Precisamos tomar decisões com base em **condições**:

### 💭 Exemplo da Vida Real:
> *"Se eu tiver R$ 20,00, então vou ao cinema. Senão, fico em casa."*

---

### 💻 Sintaxe do `if / else` (Python)

```python
if <condição>:
    # Bloco executado se a condição for VERDADEIRA
    instrução_verdadeira_1
    instrução_verdadeira_2
else:
    # Bloco executado se a condição for FALSA
    instrução_falsa_1
    instrução_falsa_2
🔀 4. Operadores LógicosPermitem combinar várias condições em uma única tomada de decisão. Baseiam-se na lógica proposicional (onde 1 = Verdadeiro e 0 = Falso).📌 Resumo dos OperadoresOperadorNomeRegra de OuroE / andConjunçãoRetorna VERDADEIRO apenas se TODAS as condições forem verdadeiras.OU / orDisjunçãoRetorna VERDADEIRO se PELO MENOS UMA das condições for verdadeira.NÃO / notNegaçãoInverte o valor lógico (o que é Verdadeiro vira Falso e vice-versa).💡 Exemplos Práticos de Expressões LógicasOperador E (and):PlaintextSe (possuir R$ 20,00) E (NÃO estiver chovendo) então:
    Vou ao cinema
(Só vai ao cinema se atender a ambos os requisitos ao mesmo tempo!)Operador OU (or):PlaintextSe (possuir R$ 20,00) OU (possuir 1 vale-cinema) então:
    Vou ao cinema
(Basta ter o dinheiro OU o vale para conseguir ir ao cinema!)🥊 5. Desafio da Aula🎯 Problema:Escreva um programa que solicite um número ao usuário e determine se ele é positivo, negativo ou zero.🖥️ Solução em Python:Python# Solicita um número ao usuário
numero = float(input("Digite um número: "))

# Estrutura de decisão encadeada
if numero > 0:
    print("O número é POSITIVO! ➕")
elif numero < 0:
    print("O número é NEGATIVO! ➖")
else:
    print("O número é ZERO! ⭕")

---

### 📌 Resumo em Referência às Fontes do PDF:
- As **fases do processamento** e a analogia com o **gaveteiro** explicam a memória[cite: 1].
- Os **operadores de atribuição e aritméticos** foram tabulados para consulta rápida[cite: 1].
- A **sintaxe `if/else`** e a explicação dos **operadores lógicos (E, OU, NÃO)** trazem a base teórica com os exemplos do cotidiano (cinema/dinheiro)[cite: 1].
- O **desafio proposto** no final da apresentação foi resolvido em Python para prática direta[cite: 1].
