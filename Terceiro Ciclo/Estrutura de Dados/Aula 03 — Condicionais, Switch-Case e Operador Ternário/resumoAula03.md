# 📚 Resumo de Aula: Estruturas Condicionais & Revisão de Lógica

> **Curso:** Análise e Desenvolvimento de Sistemas (ADS) — Fatec Itapetininga  
> **Disciplina:** Estrutura de Dados  
> **Tema:** Aula 03 – Revisão de Conteúdos (Condicional e Operadores)

---

## 📑 Agenda da Aula
1. 🧠 **Revisão de Conceitos Básicos**: Variáveis, Operadores de Atribuição e Aritméticos
2. 🔀 **Estruturas de Decisão**: `if`, `else`, Estrutura Encadeada (`elif`)
3. ⚡ **Operadores Lógicos**: `E` (AND), `OU` (OR), `NÃO` (NOT)
4. 🔀 **Outras Estruturas**: `Switch/Case` e Operador Ternário
5. 💻 **Exercícios & Desafios Práticos**

---

## 1. 🗃️ Revisão: Variáveis e Operadores

### 🗄️ O que é uma Variável?
Pense na memória do computador como um **gaveteiro**:
* Cada gaveta possui uma **etiqueta (nome da variável)**.
* Dentro da gaveta guardamos um **dado/conteúdo** (ex: nome `"Adriano"`, idade `25`).

---

### ➕ Operadores Aritméticos
Servem para realizar cálculos matemáticos fundamentais:

| Operador | Operação | Exemplo |
| :---: | :---: | :---: |
| `+` | Adição | `5 + 2 = 7` |
| `-` | Subtração | `5 - 2 = 3` |
| `*` | Multiplicação | `5 * 2 = 10` |
| `/` | Divisão | `5 / 2 = 2.5` |
| `**` | Potenciação | `5 ** 2 = 25` |
| `%` | Módulo (Resto da divisão) | `5 % 2 = 1` |

---

### 📝 Operadores de Atribuição
Usados para definir ou atualizar o valor contido em uma variável:

| Símbolo | Operação | Equivalente a... |
| :---: | :--- | :--- |
| `=` | Atribuição Simples | `x = 10` |
| `+=` | Atribuição com Soma | `x = x + y` |
| `-=` | Atribuição com Subtração | `x = x - y` |
| `*=` | Atribuição com Multiplicação | `x = x * y` |
| `/=` | Atribuição com Divisão | `x = x / y` |
| `%=` | Atribuição com Módulo | `x = x % y` |

---

## 2. 🔀 Estruturas de Decisão (Condicionais)

Na vida real, não seguimos apenas caminhos retos — precisamos **tomar decisões** com base em condições:
> 🎬 *Exemplo do dia a dia:*  
> **SE** eu tiver R$ 20,00 ➔ **Vou ao cinema** 🍿  
> **SENÃO** ➔ **Fico em casa** 🏠

### 💻 Sintaxe Geral (`if / else` em Python)

```python
if <condicao>:
    # Instruções executadas se a condição for VERDADEIRA
    instrucao_verdadeira()
else:
    # Instruções executadas se a condição for FALSA
    instrucao_falsa()
3. 🧩 Operadores LógicosPermitem combinar ou inverter condições (Retornam Verdadeiro / 1 ou Falso / 0):  OperadorNomeRegraExemplo do Mundo RealANDEAmbas as condições devem ser verdadeiras.  Se tiver R$ 20,00 E não estiver chovendo ➔ Vou ao cinema.  OROUPelo menos uma das condições deve ser verdadeira.  Se tiver R$ 20,00 OU tiver 1 vale-cinema ➔ Vou ao cinema.  NOTNÃOInverte o valor lógico (Verdadeiro vira Falso e vice-versa).  Se NÃO estiver chovendo ➔ Vou passear.4. 🔗 Estrutura Encadeada (Aninhada) e Outras Formas🧗 Selección Encadeada (if / elif / else)Quando precisamos escolher uma entre várias opções, encaixamos condições:  Pythonif condicao_1:
    # Ação 1
elif condicao_2:
    # Ação 2
else:
    # Ação se nenhuma das anteriores for satisfeita
🔀 Switch / Case e Operador TernárioSwitch / Case: Escolha direta com base no valor de uma variável (em Python 3.10+ usa-se o match / case).  Operador Ternário: Forma resumida de escrever um if / else simples em uma única linha:  Pythonstatus = "Aprovado" if nota >= 6 else "Reprovado"
🧪 5. Exercícios e Desafios da Aula1️⃣ Verificar se o Número é Positivo, Negativo ou ZeroPythonnumero = float(input("Digite um número: "))

if numero > 0:
    print("O número é POSITIVO ➕")
elif numero < 0:
    print("O número é NEGATIVO ➖")
else:
    print("O número é ZERO 0️⃣")
2️⃣ Aprovado ou ReprovadoRegra: Nota $\ge$ 6 ➔ Aprovado | Nota < 6 ➔ Reprovado.  Pythonnota = float(input("Digite a nota do aluno: "))

if nota >= 6.0:
    print("Aluno APROVADO! 🎉")
else:
    print("Aluno REPROVADO! ❌")
3️⃣ Par ou ÍmparPythonnum = int(input("Digite um número inteiro: "))

if num % 2 == 0:
    print(f"O número {num} é PAR ✌️")
else:
    print(f"O número {num} é ÍMPAR ☝️")
4️⃣ Vogal ou ConsoantePythonletra = input("Digite uma letra: ").lower()

if letra in ['a', 'e', 'i', 'o', 'u']:
    print("É uma VOGAL 🔤")
else:
    print("É uma CONSOANTE 🔤")
5️⃣ Classificação de TriângulosEquilátero: 3 lados iguais.  Isósceles: 2 lados iguais[cite: 1].Escaleno: 3 lados diferentes[cite: 1].Pythona = float(input("Lado A: "))
b = float(input("Lado B: "))
c = float(input("Lado C: "))

if a == b == c:
    print("Triângulo EQUILÁTERO 📐")
elif a == b or a == c or b == c:
    print("Triângulo ISÓSCELES 📐")
else:
    print("Triângulo ESCALENO 📐")
6️⃣ Cálculo de Imposto de Renda 💵[cite: 1]Faixa Salarial AnualAlíquota do ImpostoAté R$ 20.000,00Isento (0%)De R$ 20.000,01 até R$ 50.000,0010%Acima de R$ 50.000,0020%Pythonsalario = float(input("Digite o salário anual: R$ "))

if salario <= 20000:
    imposto = 0.0
    print("Isento de Imposto de Renda! 😄")
elif salario <= 50000:
    imposto = salario * 0.10
    print(f"Imposto a pagar (10%): R$ {imposto:.2f}")
else:
    imposto = salario * 0.20
    print(f"Imposto a pagar (20%): R$ {imposto:.2f}")
  💡 Dica de Ouro: Teste de Mesa 📝Após programar, faça o Teste de Mesa[cite: 1]:Acompanhe a execução linha por linha do seu código[cite: 1].Anote os valores das variáveis a cada passo[cite: 1].Verifique se os caminhos condicionais tomados produzem o resultado esperado[cite: 1]!
