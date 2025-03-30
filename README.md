# Desafio de Movimentação de Peças de Xadrez em C

Este repositório contém a solução para o desafio de nível mestre, que consiste em simular a movimentação de peças de xadrez (Torre, Bispo, Rainha e Cavalo) utilizando recursividade e loops complexos em C.

## Descrição do Desafio

O desafio foca na aplicação de recursividade e loops aninhados complexos para simular o movimento de peças de xadrez em um tabuleiro. O objetivo é imprimir no console a direção do movimento a cada casa percorrida pela peça.

### Peças e Movimentos

* **Torre**: Move-se em linha reta horizontalmente ou verticalmente. O programa simula o movimento da Torre cinco casas para a direita, utilizando recursão.
* **Bispo**: Move-se na diagonal. O programa simula o movimento do Bispo cinco casas na diagonal para cima e à direita, utilizando recursão e loops aninhados.
* **Rainha**: Move-se em todas as direções. O programa simula o movimento da Rainha oito casas para a esquerda, utilizando recursão.
* **Cavalo**: Move-se em "L". O programa simula o movimento do Cavalo duas casas para cima e uma casa para a direita, utilizando loops aninhados complexos.

## Como Executar

1.  **Pré-requisitos**:
    * Certifique-se de ter um compilador C instalado (como o GCC).
2.  **Compilação**:
    * Abra um terminal ou prompt de comando.
    * Navegue até o diretório onde o arquivo `xadrez_mestre.c` está localizado.
    * Execute o seguinte comando para compilar o código:

    ```bash
    gcc xadrez_mestre.c -o xadrez_mestre 
    ```

3.  **Execução**:
    * Após a compilação, execute o programa com o seguinte comando:

    ```bash
    ./xadrez_mestre 
    ```

4.  **Saída Esperada**:
    * O programa irá imprimir no console a sequência de movimentos para cada peça, conforme especificado no desafio.

## Estrutura do Código

O código em `xadrez_mestre.c` está organizado da seguinte forma:

* Funções recursivas ( `moverTorre`, `moverBispo`, `moverRainha`) para simular o movimento da Torre, Bispo e Rainha, respectivamente.
* Loops aninhados complexos para simular o movimento do Cavalo.
* Impressão das direções de movimento no console usando `printf`.
* O código contém comentários explicando cada etapa da lógica de movimentação das peças, incluindo o uso de recursividade e loops aninhados complexos.

## Requisitos

* O código foi desenvolvido em C e utiliza apenas variáveis do tipo inteiro e string.
* Não há validação de entrada de usuário.
* A lógica de movimentação de cada peça é implementada individualmente.
* O movimento do Cavalo é simulado utilizando loops aninhados.
* A Torre, o Bispo e a Rainha utilizam recursão para simular seus movimentos.
