# Ordenação de Jogadores

[![wakatime](https://wakatime.com/badge/user/920a7e43-2969-4212-82ff-1b375685ff58/project/a1233753-fb50-4413-b284-17c822f03ee3.svg)](https://wakatime.com/badge/user/920a7e43-2969-4212-82ff-1b375685ff58/project/a1233753-fb50-4413-b284-17c822f03ee3)

Um algoritmo que realiza a ordenação de jogadores aleatórios feito em C++ por [Daniel Sansão Araldi](https://github.com/DanielAraldi) e [Mateus Vanunci](https://github.com/vanunci).

### Descrição

No primeiro trabalho da M3 o objetivo é explorar um pouco o uso de algoritmos de ordenação, utilizando alguns conceitos que já vimos anteriormente.

### O que deve ser feito?

1. Criem uma `struct` `Player`, ela deve conter uma string nome, e um inteiro pontuação.

   a. Criem um vetor de `struct` do tipo `Player`, com até 1000 jogadores.

   b. Eles devem ser preenchidos com valores aleatórios (os nomes não precisam fazer sentido).

   c. Não deve existir um vetor de nomes e um vetor de pontos separados.

2. Devem existir duas funções, `showPlayers()` e `highestScores()`:

   a. `showPlayers()` deve mostrar no console o nome de todos os jogadores ordenados em ordem alfabética.

   b. `highestScores()` deve mostrar no console as 100 melhores pontuações, ordenadas da melhor para a pior e **jogadores com pontuações iguais devem aparecer ordenados em ordem alfabética**.

3. Para fazer a ordenação, vocês devem implementar 2 algoritmos de ordenação diferentes:

   a. Cada função deve utilizar um algoritmo de ordenação diferente.

   b. Um dos algoritmos deve ser escolhido entre: Insertion Sort ou Bubble Sort.

   c. Outro algoritmo deve ser o Merge Sort.
