#include <stdio.h>

void printa_num () {
    //exercicio 1. use um loop para imprimir os numeros de 1 a 10.
    for (int i=1; i <=10; i++) {
        printf("%d\n", i);
    }
}

void soma_multiplos () {
    //exercicio 4. calcula a soma de todos os numeros que sao multilos de 3 ou 5 no intervalo de 1 a 100 utilizando while
    int soma = 0;
    int i = 1;
    while (i <= 100) {
        if (i % 3 == 0 || i % 5 == 0) {
            soma += i;
        }
        i++;
    }
    printf("A soma e %d\n", soma);
}

void printa_pares () {
    //exercicio 5. imprimir os numeros pares de 2 a 20. use continue para pular os impares
    for (int i=2; i <= 20; i++) {
        if (i%2 != 0) {
            continue;
        }
        printf("%d\n", i);
    }
}

void main () {
     //exercicios da aula 3 do curso de programacao I no ipv

    printf("Entre o numero do exercicio que deseja executar:\n");
    int exer;
    scanf("%d", &exer);
    switch (exer)
    {
    case 1:
        printf("exercicio 1. use um loop para imprimir os numeros de 1 a 10.\n");
        for (int i=1; i <=10; i++) {
            printf("%d\n", i);
        }
        break;

    case 7:
        printf("exercicio 7. verifique se um numero inserido e primo ou nao.\n");
        int num;
        printf("Digite um numero inteiro.\n");
        scanf("%d", &num);
        //fazer uma funcao para calcular se e numero primo
        break;

    case 9:
        printf("exercicio 9. solicite numeros inteiros positivos ate que seja inserido um numero negativo. Em seguida mostre a soma dos numeros inseridos.Use while.\n");

    
    default:
        printf("Nao corresponde a um exercicio.\n");
        break;
    }
}