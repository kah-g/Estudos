#include <stdio.h>
#include <string.h>

int * divisor (int num) {
    float resultado;
    int divisores[15];
    int i = 0;
    while (1) {
        resultado = num / 2;
        printf("%d e %f\n", num, resultado);
        if (resultado == 0) {
            return divisores;
        }
        divisores[i] = num % 2;
        //num deve receber resultado
        i++;
    }
}

int conversor (int num) {
    int* pDivisores= divisor(num);
    for (int i = 0; i < 15; i++) {
        printf("%d\n", pDivisores[i]); 
    }
}

float calculadora (int op, float valor1, float valor2) {
    switch (op)
    {
    case 1:
        return valor1 + valor2;

    case 2:
        return valor1 - valor2;
    
    case 3:
        return valor1 * valor2;

    case 4:
        return valor1 / valor2;
    
    default:
        printf("ERRO\n");
        break;
    }
}

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
        scanf("%s", nome);
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
        printf("15. Calcule o quadrado de um numero.\n");
        int num7;
        printf("Entre com um numero intero:\n");
        scanf("%d", &num7);
        printf("%d\n", num7 * num7);
        break;

    case 16:
        printf("16. Calcule o valor absoluto de um numero.\n");
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
        int num10;
        printf("Entre com um numero intero:\n");
        scanf("%d", &num10);
        int num11 = conversor (num10);
        break;

    case 19:
        printf("19. Determine a nota correspondente a uma pontuação bom base na escala fornecida.\n");
        int num12;
        printf("Digite uma pontuacao entre 0 e 100:\n");
        scanf("%d", &num12);
        char notaD[2];
        if (num12 < 0 || num12 > 100) {
            printf("Pontuacao invalida.\n");
            break;
        } else {
            if (num12 >= 90 && num12 <= 100) {
                strcpy (notaD, "A");
            }
            if (num12 >= 80 && num12 <= 89) {
                strcpy (notaD, "B");
            }
            if (num12 >= 70 && num12 <= 79) {
                strcpy (notaD, "C");
            }
            if (num12 >= 60 && num12 <= 69) {
                strcpy (notaD, "D");
            }
            if (num12 >= 0 && num12 < 60) {
                strcpy (notaD, "F");
            }
        }
        printf("A nota recebida foi: %s.\n", notaD);
        break;

        case 20:
            printf("20.Verifique se um caractere é uma vogal ou uma consoante.\n");
            char letra[2];
            printf("Digite uma letra.\n");
            scanf("%s", letra);
            if ((*letra >= 'a' && *letra <= 'z') || (*letra >= 'A' && *letra <= 'Z')) { //confirming that its a letter
                if (*letra == 'a' || *letra == 'A' || *letra == 'e' || *letra == 'E' || *letra == 'i' || *letra == 'I' || *letra == 'u' || *letra == 'U') {
                    printf("O caractere fornecido é uma vogal.\n");
                } else {
                    printf("O caractere fornecido é uma consoante.\n");
                }
            } else {
                printf("O caractere fornecido não é uma letra.\n");
            }
            break;

            case 21:
            printf("21. Crie uma calculadora que realize adicao, subtracao, multiplicacao e divisao.\n");
            int op;
            printf("Digite o numero da operacao que deseja realizar: 1-adicao, 2-subtracao, 3-multiplicacao, 4-divisao.\n");
            scanf("%d", &op);
            float valor1, valor2, resultado;
            printf("Digite o primeiro valor da operacao.\n");
            scanf("%f", &valor1);
            printf("Digite o segundo valor da operacao.\n");
            scanf("%f", &valor2);
            resultado = calculadora (op, valor1, valor2);
            printf("O resultado e: %.2f.\n", resultado);
            break;

            case 22:
            printf("Calcule o dia da semana correspondente a uma data.\n");

    
    default:
        printf("Nao corresponde a um exercicio.\n");
        break;
    }
    
}
