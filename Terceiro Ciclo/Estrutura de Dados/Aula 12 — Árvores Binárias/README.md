# 🌳 Aula 12 — Árvores Binárias

A aula introduz as **árvores binárias** e a organização de dados por comparações durante a inserção. O exemplo em C++ constrói dinamicamente uma árvore binária de busca: o primeiro número informado torna-se a raiz; valores maiores são inseridos à direita e valores menores ou iguais, à esquerda. Ao final, o programa exibe a estrutura usando chamadas recursivas.

> **Disciplina:** Estrutura de Dados  
> **Tema:** Árvores binárias, árvore binária de busca, ponteiros e alocação dinâmica

---

## 🎯 Objetivos da aula

- 🌱 Compreender a estrutura de uma árvore e o papel da raiz;
- 🔗 Representar nós com ponteiros para os filhos esquerdo e direito;
- ⚖️ Organizar os valores conforme comparações com cada nó;
- 💾 Criar nós dinamicamente com `new`;
- 🔁 Usar recursão para inserir valores e percorrer a árvore;
- 📏 Conhecer os conceitos de folha, subárvore, altura e balanceamento.

## 🌿 Árvore binária de busca

Cada nó contém um valor e referências para, no máximo, dois filhos. Nesta árvore de busca, a inserção segue a regra:

- valores **maiores** que o nó atual seguem para a direita;
- valores **menores ou iguais** seguem para a esquerda;
- a comparação se repete até encontrar um ponteiro vazio (`NULL`), onde o novo nó é conectado.

```text
             raiz
            /    \
   menor ou igual  maior
```

Essa organização pode reduzir o trabalho de busca quando a árvore está bem distribuída. A forma da árvore depende da ordem de inserção; o exemplo não implementa rebalanceamento, então a árvore pode ficar desbalanceada.

## 📖 Nomenclatura

| Termo | Significado |
|---|---|
| Raiz | Primeiro nó, no topo da árvore |
| Nó | Elemento que armazena um valor e ligações para seus filhos |
| Filho | Nó ligado abaixo de outro nó |
| Folha | Nó sem filhos |
| Subárvore | Nó considerado raiz junto com seus descendentes |
| Altura | Comprimento do caminho mais longo da raiz até uma folha |

## 💻 Exemplo em C++

O arquivo `ExemploArvoreSimples.cpp` declara um registro com o campo `codigo` e os ponteiros `esquerda` e `direita`. A função `AlocaDado` procura recursivamente a posição de inserção. A função `Exibe` percorre os dois lados e posiciona os valores no console.

O programa recebe números até que a pessoa escolha parar. O primeiro valor informado fica na raiz, e valores repetidos seguem para a esquerda por causa da comparação usada na inserção.

> **Observação:** o exemplo usa `windows.h` e funções de console do Windows (`GoToXY`), portanto foi escrito para ambiente Windows. A função de exibição percorre a árvore recursivamente; a rotina não implementa operações de busca, remoção ou balanceamento.

## 📂 Materiais disponíveis

| Arquivo | Conteúdo |
|---|---|
| [💻 ExemploArvoreSimples.cpp](ExemploArvoreSimples.cpp) | Inserção dinâmica de números em uma árvore binária de busca e exibição recursiva no console. |
| [📄 Árvore.pdf](Árvore.pdf) | Material da aula: introdução, árvore binária, nomenclatura, altura e balanceamento. |

## 📚 Referência

- CORMEN, T. H.; LEISERSON, C. E.; RIVEST, R. L.; STEIN, C. *Algoritmos: Teoria e Prática*. 3. ed. Elsevier, 2012. Capítulo 12 — Árvores de pesquisa.

---

[← Aula 11](../Aula%2011%20%E2%80%94%20Pilha%20(Stack)/README.md) · [📚 Índice da disciplina](../README.md)
