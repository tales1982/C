# Lista de Exercícios de Threads

## 1. Criação de Threads Simples
- **Objetivo:** Crie um programa que inicie várias threads. Cada thread deve imprimir uma mensagem identificando-se.
- **Desafio:** Garanta que as threads realmente sejam executadas em paralelo.

## 2. Cálculo Paralelo
- **Objetivo:** Crie um programa que divida um array de números inteiros em partes iguais e calcule a soma de cada parte em uma thread separada.
- **Desafio:** Combine os resultados de todas as threads para obter a soma total.

## 3. Contador Compartilhado
- **Objetivo:** Crie várias threads que incrementam uma variável compartilhada `contador`.
- **Desafio:** Use um mutex para proteger o acesso à variável `contador` e evitar condições de corrida.

## 4. Threads e Join
- **Objetivo:** Crie um programa que inicie várias threads, onde cada thread faz uma pausa de alguns segundos e depois imprime uma mensagem.
- **Desafio:** Use `pthread_join` para garantir que o programa principal espere todas as threads terminarem antes de sair.

## 5. Produtor-Consumidor
- **Objetivo:** Implemente o problema do produtor-consumidor usando threads. O produtor deve gerar números e armazená-los em um buffer, enquanto o consumidor deve retirá-los do buffer.
- **Desafio:** Use mutexes e variáveis de condição para sincronizar o acesso ao buffer.

## 6. Barreira de Sincronização
- **Objetivo:** Crie um programa onde várias threads devem alcançar um determinado ponto de sincronização antes de continuar.
- **Desafio:** Use uma barreira (`pthread_barrier`) para garantir que todas as threads esperem umas pelas outras antes de prosseguir.

## 7. Ping-Pong com Threads
- **Objetivo:** Crie duas threads que alternadamente imprimam "Ping" e "Pong".
- **Desafio:** Use mutexes e variáveis de condição para coordenar a troca entre as threads.

## 8. Criação e Destruição de Threads Dinâmicas
- **Objetivo:** Crie um programa que dinamicamente crie e destrua threads. Cada thread deve realizar uma tarefa simples, como imprimir seu identificador, e depois terminar.
- **Desafio:** Garanta que o programa principal acompanhe a criação e destruição das threads.

## 9. Busca Paralela
- **Objetivo:** Implemente uma busca paralela em um grande array. Divida o array em partes e distribua entre várias threads para procurar por um número específico.
- **Desafio:** Pare todas as threads quando uma delas encontrar o número.

## 10. Exclusão Mútua e Deadlock
- **Objetivo:** Implemente um cenário em que várias threads tentam acessar múltiplos recursos (mutexes) em diferentes ordens.
- **Desafio:** Introduza e resolva um deadlock causado pela ordem de aquisição dos mutexes.
