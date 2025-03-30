# Desafio de Movimentação de Peças de Xadrez em C

Este repositório contém a solução para o desafio de nível novato proposto, que consiste em simular a movimentação de peças de xadrez (Torre, Bispo e Rainha) utilizando estruturas de repetição em C.

## Descrição do Desafio

O desafio foca na aplicação de estruturas de repetição (`for`, `while` e `do-while`) para simular o movimento de peças de xadrez em um tabuleiro. O objetivo é imprimir no console a direção do movimento a cada casa percorrida pela peça.

### Peças e Movimentos

* **Torre**: Move-se em linha reta horizontalmente ou verticalmente. O programa simula o movimento da Torre cinco casas para a direita.
* **Bispo**: Move-se na diagonal. O programa simula o movimento do Bispo cinco casas na diagonal para cima e à direita.
* **Rainha**: Move-se em todas as direções. O programa simula o movimento da Rainha oito casas para a esquerda.

## Como Executar

1.  **Pré-requisitos**:
    * Certifique-se de ter um compilador C instalado (como o GCC).
2.  **Compilação**:
    * Abra um terminal ou prompt de comando.
    * Navegue até o diretório onde o arquivo `xadrez.c` está localizado.
    * Execute o seguinte comando para compilar o código:

    ```bash
    gcc xadrez.c -o xadrez
    ```

3.  **Execução**:
    * Após a compilação, execute o programa com o seguinte comando:

    ```bash
    ./xadrez
    ```

4.  **Saída Esperada**:
    * O programa irá imprimir no console a sequência de movimentos para cada peça, conforme especificado no desafio.

## Estrutura do Código

O código em `xadrez.c` está organizado da seguinte forma:

* Utilização de um loop `for` para simular o movimento da Torre.
* Utilização de um loop `while` para simular o movimento do Bispo.
* Utilização de um loop `do-while` para simular o movimento da Rainha.
* Impressão das direções de movimento no console usando `printf`.
* O código contém comentários explicando cada etapa da lógica de movimentação das peças.

## Requisitos

* O código foi desenvolvido em C e utiliza apenas variáveis do tipo inteiro e string.
* Não há validação de entrada de usuário.
* A lógica de movimentação de cada peça é implementada individualmente.

## Contribuição

Contribuições para melhorar o código ou adicionar novas funcionalidades são bem-vindas. Sinta-se à vontade para abrir pull requests ou relatar problemas.
