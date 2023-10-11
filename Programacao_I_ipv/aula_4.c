#include <stdio.h>

int main () {
    //arrays
    int array [4] = {55, 9, 18, -3};
    int matriz [2] [3] = {{5, 31, 118}, {-9, 53, 48}};
    int tamanhoA = sizeof (array) / sizeof(array[0]); //vendo o tamanho do array
    int tamanhoB = sizeof (matriz) / sizeof(matriz[0]); //vendo o tamanho da matriz
    //o primeiro elemento de um array e um apontador para o array
    printf("tamanho array: %d\n", tamanhoA);
    printf("tamanho matriz: %d\n", tamanhoB);

    //testando alterar o valor pelo ponteiro
    int num = 42;
    int *ptr = &num;
    printf("%d\n", *ptr);
    *ptr = 5;
    printf("%d\n", *ptr);
    printf("%d\n", num);

    //exercicios da aula 4
    printf("Entre o numero do exercicio que deseja executar:\n");
    int exer;
    scanf("%d", &exer);
    switch (exer)
    {
    case 1:
        printf("1.Declare um array de inteiros e preencha-o com os numeros de 1 a 10 usando um loop. Imprima-os em ordem inversa.\n");
        int listaNum [10];
        for (int i=0; i < 10; i++) {
            listaNum[i] = i +1;
        }
        for (int i=9; i >= 0; i--) {
            printf("%d\n", listaNum[i]);
        }
        break;

    case 2:
        printf("2.Declare uma string que armazene uma palavra. Conte e imprima o numero de caracteres da palavra.\n");
        char palavra [10];
        printf("Entre com uma palavra:\n");
        scanf("%s", palavra);
        int j = 0, contador = 0;
        while (palavra[j] != '\0') {
            contador += 1;
            j += 1;
        }
        printf("%d\n", contador);
        break;
    
    case 3:
        printf("3.Solicite uma sequencia de numeros inteiros e armazene em um array. Imprima a media desses numeros.\n");
        printf("Quantos numeros deseja inserir?\n");
        int quant;
        scanf("%d", &quant);
        //printf("%d", quant);
        int arrayB [quant];
        /*float soma = 0;
        for (int k = 0; k < quant; k++) {
            printf("Digite um numero:\n");
            scanf("%d", array2[k]);
            soma += array2[k];
        }
        soma = soma / quant;
        printf("A soma e: %f.\n", soma);*/
        break;
    
    default:
        break;
    }

    return 0;
}