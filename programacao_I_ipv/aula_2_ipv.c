#include <stdio.h>

void main () {
    //exercicio da aula 2 do curso de programacao I no ipv

    printf("Entre o numero do exercicio que deseja executar:\n");
    int exer;
    scanf("%d", &exer);
    switch (exer)
    {
    case 1:
        //1.crie um programa que mostre no ecra o texto hello world
        printf("Hello world\n");
        break;

    case 2:
        //2.declare uma variavel e atribua o valor 10. Imprima o seu valor
        int num = 10;
        printf("%d\n", num);
        break;

    case 3:
        //3.declare uma variavel e atribua o valor 3,14159. Imprima o seu valor com duas casas decimais
        float num2 = 3.14159;
        printf("%.2f\n", num2);
        break;

    case 4:
        //4.solicite o nome do usuario como entrada e imprime uma mensagem de boas vindas que inclui o nome do usuario
        printf("Entre com o seu nome:\n");
        char nome[10];
        scanf("%s", &nome);
        printf("Seja bem vindo %s\n", nome);
        break;

    case 5:
        //5.calcule a area de um retangulo. Solicite ao usuario o comprimento e a largura como entrada
        float comp, larg, area;
        printf("Digite o comprimento do retangulo:\n");
        scanf("%f", &comp);
        printf("Digite a largura do retangulo:\n");
        scanf("%f", &larg);
        area = comp * larg;
        printf("A area do retangulo e: %.2f\n", area);
        break;

    case 6:
        //6.converta graus celsius para fahrenheit. Receba a temperatura em celsius como entrada
        float cel, fah;
        printf("Digite a temperatura em celsius:\n");
        scanf("%f", &cel);
        fah = (cel*1.8) +32;
        printf("A temperatura em Fahrenheit e: %.2f\n", fah);
        break;

    case 7:
        //7.verifique se um numero e par ou impar
        int num3;
        printf("Entre com um numero inteiro\n");
        scanf("%d", &num3);
        float result = num3%2;
        if (result == 0) {
            printf("o numero e par\n");
        } else {
            printf("o numero e impar\n");
        }
        break;

    case 8:
        //8.trocar o valor de duas variavies
        break;

    case 9:
        //9.encontre o maior de tres numeros --pode ser mais curto
        int numA, numB, numC;
        printf("Entre com o primeiro numero:\n");
        scanf("%d", &numA);
        printf("Entre com o segundo numero:\n");
        scanf("%d", &numB);
        printf("Entre com o terceiro numero:\n");
        scanf("%d", &numC);
        if (numA >= numB) {
            if (numA >= numC) {
                printf("%d e o maior numero\n", numA);
            } else {
                printf("%d e o maior numero\n", numC);
            }
        } else if (numB >= numC) {
            printf("%d e o maior numero\n", numB);
        } else {
            printf("%d e o maior numero\n", numC);
        }
        break;

    case 10:
       printf("Exercicio 10 - Verifique se um ano e bissexto ou nao.\n");
        int ano;
        printf("Entre um ano valido:\n");
        scanf("%d", &ano);
        if ((ano % 4 == 0 && ano % 100 !=0) || (ano % 400 == 0)) {
            printf ("%d e ano bissexto\n", ano);
        } else  {
            printf ("%d nao e ano bissexto\n", ano);
        }
        break;

    case 11:
        printf("Exercicio 11 - Receba a idade do usuario como entrada e determina se e criança (0-12), adolescente (13-17), adulto (18-64) ou idoso (65+).\n");
        int idade;
        printf("Digite a idade:\n");
        scanf("%d", &idade);
        if (idade >= 0 && idade <= 12) {
            printf("Criança.\n");
        } else if (idade >= 13 && idade <= 17) {
            printf("Adolescente.\n");
        } else if (idade >= 18 && idade <= 64) {
            printf("Adulto.\n");
        } else {
            printf("Idoso.\n");
        }
        break;

    case 12:
        printf("Exercicio 12 - Determine se um numero e positivo, negativo ou zero.\n");
        int num4;
        printf("Entre com um numero inteiro:\n");
        scanf("%d", &num4);
        if(num4 >= 0) {
            if (num4 == 0) {
                printf("O numero e zero.\n");
            } else {
                printf("O numero e positivo.\n");
            }
        } else {
            printf("O numero e negativo.\n");
        }
        break;

    case 13:
        printf("Exercicio 13 - Verifique se um numero e divisivel por 5 ou 7.\n");
        int num5;
        printf("Entre com um numero inteiro:\n");
        scanf("%d", &num5);
        if (num5 % 5 == 0 || num5 % 7 == 0) {
            printf("O numero e divisivel por 5 ou 7.\n");
        } else {
            printf("O numero nao e divisivel por 5 ou 7.\n");
        }
        break;

    case 14:
        printf("Exercicio 13 - Verifique se um numero e multiplo de 3 e 5 ao mesmo tempo.\n");
        int num6;
        printf("Entre com um numero inteiro:\n");
        scanf("%d", &num6);
        if (num6 % 3 == 0 && num6 % 5 == 0) {
            printf("O numero e multiplo de 3 e 5 ao mesmo tempo.\n");
        } else {
            printf("O numero nao e multiplo de 3 e 5 ao mesmo tempo.\n");
        }
        break;

    case 15:
        printf("Exercicio 15 - Calcule o quadrado de um numero.\n");
        int num7;
        printf("Entre com um numero intero:\n");
        scanf("%d", &num7);
        printf("%d\n", num7 * num7);
        break;
    
    default:
        printf("Nao corresponde a um exercicio.\n");
        break;
    }
    
}