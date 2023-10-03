#include <stdio.h>

void main () {
    //exercicio da aula 2 do curso de programacao I no ipv

    printf("Entre o numero do exercicio que deseja executar:\n");
    int exer;
    scanf("%d", &exer);
    switch (exer)
    {
    case 1:
        printf("1.Crie um programa que mostre no ecra o texto hello world.\n");
        printf("Hello world\n");
        break;

    case 2:
        printf("2.Declare uma variavel e atribua o valor 10. Imprima o seu valor.\n");
        int num = 10;
        printf("%d\n", num);
        break;

    case 3:
        printf("3.Declare uma variavel e atribua o valor 3,14159. Imprima o seu valor com duas casas decimais.\n");
        float num2 = 3.14159;
        printf("%.2f\n", num2);
        break;

    case 4:
        printf("4.Solicite o nome do usuario como entrada e imprime uma mensagem de boas vindas que inclui o nome do usuario.\n");
        printf("Entre com o seu nome:\n");
        char nome[10];
        scanf("%s", &nome);
        printf("Seja bem vindo %s\n", nome);
        break;

    case 5:
        printf("5.Calcule a area de um retangulo. Solicite ao usuario o comprimento e a largura como entrada.\n");
        float comp, larg, area;
        printf("Digite o comprimento do retangulo:\n");
        scanf("%f", &comp);
        printf("Digite a largura do retangulo:\n");
        scanf("%f", &larg);
        area = comp * larg;
        printf("A area do retangulo e: %.2f\n", area);
        break;

    case 6:
        printf("6.Converta graus celsius para fahrenheit. Receba a temperatura em celsius como entrada.\n");
        float cel, fah;
        printf("Digite a temperatura em celsius:\n");
        scanf("%f", &cel);
        fah = (cel*1.8) +32;
        printf("A temperatura em Fahrenheit e: %.2f\n", fah);
        break;

    case 7:
        printf("7.Verifique se um numero e par ou impar.\n");
        int num3;
        printf("Entre com um numero inteiro:\n");
        scanf("%d", &num3);
        float result = num3%2;
        if (result == 0) {
            printf("o numero e par.\n");
        } else {
            printf("o numero e impar.\n");
        }
        break;

    case 8:
        printf("8.Trocar o valor de duas variavies, sem usar uma variavel temporaria.\n");
        int num8A, num8B;
        printf("Entre com o primeiro numero:\n");
        scanf("%d", &num8A);
        printf("Entre com o segundo numero:\n");
        scanf("%d", &num8B);
        printf("Antes da troca - Numero A: %d, numero B: %d.\n", num8A, num8B);
        num8A = num8A + num8B;
        num8B = num8A - num8B;
        num8A = num8A - num8B;
        printf("Depois da troca - Numero A: %d, numero B: %d.\n", num8A, num8B);
        break;

    case 9:
        printf("9.Encontre o maior de tres numeros.\n");
        int numA, numB, numC;
        printf("Entre com o primeiro numero:\n");
        scanf("%d", &numA);
        printf("Entre com o segundo numero:\n");
        scanf("%d", &numB);
        printf("Entre com o terceiro numero:\n");
        scanf("%d", &numC);
        if (numA >= numB && numA >= numC) {
            printf("%d e o maior numero\n", numA);
        } else if (numB >= numA && numB >= numC) {
            printf("%d e o maior numero\n", numB);
        } else {
            printf("%d e o maior numero\n", numC);
        }
        break;

    case 10:
       printf("10.Verifique se um ano e bissexto ou nao.\n");
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
        printf("11.Receba a idade do usuario como entrada e determina se e criança (0-12), adolescente (13-17), adulto (18-64) ou idoso (65+).\n");
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
        printf("12.Determine se um numero e positivo, negativo ou zero.\n");
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
        printf("13.Verifique se um numero e divisivel por 5 ou 7.\n");
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
        printf("14.Verifique se um numero e multiplo de 3 e 5 ao mesmo tempo.\n");
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

    case 16:
        printf("16 - Calcule o valor absoluto de um numero.\n");
        int num9;
        printf("Entre com um numero intero:\n");
        scanf("%d", &num9);
        if (num9 < 0) {
            printf("%d\n", num9 * -1);
        }
        else {
            printf("%d\n", num9);
        }
        break;

    case 17:
        printf("17.Calcule a média de três notas inseridas pelo utilizador e determine se o aluno foi aprovado ou reprovado. A média mínima para aprovação é 9.5.\n");
        float notaA, notaB, notaC, media;
        printf("Entre com a primeira nota:\n");
        scanf("%f", &notaA);
        printf("Entre com a segunda nota:\n");
        scanf("%f", &notaB);
        printf("Entre com a terceira nota:\n");
        scanf("%f", &notaC);
        media = (notaA + notaB + notaC) / 3;
        if (media >= 9.5) {
            printf("Nota: %.1f - Aprovado!\n", media);
        } else {
            printf("Nota: %.1f - Reprovado!\n", media);
        }
        break;

    case 18:
        printf("18.Converta um número inteiro em seu equivalente em binário.\n");
        break;
    
    default:
        printf("Nao corresponde a um exercicio.\n");
        break;
    }
    
}
