# Estrutura de dados
```
gcc -Wall -O2 -pedantic -Wno-unused-result -c fila.c”
gcc -Wall -O2 -pedantic -Wno-unused-result fila.o usaFila.c -o usaFila
```

## Binary trees
### Definition
* Every BT is an element with 
    * a left subtree and right subtree;
    *  or is empty.
* Each element has only one parent; except the root, who doesn't have.
* left child != right child

?can we have duplicates?

### Binary Tree
Operation   | Binary Tree   | Balanced Binary Tree  |       
----------  | ------------- | --------------------  |        
Search      | O( n )        | O( log n )
Insert      | O( n )        | O( log n )
Delete      | O( n )        | O( log n )


### Heap
Data structure to efficiently implement a **Priority Queue**
* Complete, or almost, binary tree
* A node's value is bigger or equal than its child
    * In a Maximum heap

Pode ser implementada com array

upheapify
downheapify
Operation           | Heap          |
---------------     | ------------- |
Search (min/max)    | O( 1 ) (root) |
Insert              | O( log n )    |
Delete              | O( log n )    |

### Binary Search tree
* A raiz de uma árvore é o único nó que não é filho de outro.

* Uma folha é um nó que não tem filhos.

* A altura (h) de uma árvore é o comprimento do maior caminho da raiz até uma folha.
* **Diferença**: 
    * Elementos da esquerda tem chave <= que o  pai
    * Elementos da direita tem chave > que o pai

Operação        | Complexidade  |
--------------- | ------------- |
Busca           | O ( log n )   |
Max             | O ( log n )   |
Min             | O ( log n )   |

-------------------------------
Resumindo opções de implementação de tabela de símbolos

Eficiência das operações em vetor ordenado:
* busca - O(log n), deriva da busca binária.
* min (max) - O(1).
* predecessor (sucessor) - O(log n), deriva da busca binária.
* percurso ordenado - O(n), mínimo possível já que é o tamanho da saída.
* seleção - O(1).
* rank - O(log n), deriva da busca binária.
* inserção - O(n).
* remoção - O(n).

Eficiência das operações em árvores binárias de busca:
* busca - O(h).
* min (max) - O(h).
* predecessor (sucessor) - O(h).
* percurso ordenado - O(n).
* seleção - O(h).
* rank - O(h).
* inserção - O(h).
* remoção - O(h)
-------------------------------





# Algoritmos
# Busca binária

## Ordenação
Estabilidade: Não inverte a posição de elemetos identicos
Algoritmo       | Complexidade  | Estável?      | In place
--------------- | ------------- | ------------- | ------------- 
Insertion Sort  | O ( n )       | Sim           | Sim
Selection Sort  | O( n^2 )      | Não           | Não
Heap Sort       | O( n log n  ) | Não           | Depende
### Insertion Sort
Passa por todos os elementos de um array e insere na sublista já visitada

### Selection Sort
Passa por todos os elementos não ordenados de um array, seleciona o menor, coloca no lugar certo

### Heap Sort
Heap de máximo para que seja *in place*
Complexidade para construção de heap
Com             | Complexidade      |
 -------------- | ----------------- |
sobeHeap        | n log n           |
desceHeap       | n                 |

Estabilidade: Não inverte a posição de elemetos identicos
Algoritmo       | Complexidade  | Estável?      | In place
--------------- | ------------- | ------------- | ------------- 
Insertion Sort  | O ( n )       | Sim           | Sim
Selection Sort  | O( n^2 )      | Não           | Não
Heap Sort       | O( n log n  ) |               | Depende