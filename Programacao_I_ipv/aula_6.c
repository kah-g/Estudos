#include <stdio.h>
#include <stdlib.h>

typedef struct aluno {
    char nome[10];
    int matricula;
    float nota;
} Aluno;

/*void verificaMalloc (void ponteiro) {
    if (ponteiro == NULL) {
        printf("Erro\n");
        exit(1);
    } else {
        printf("okey.\n");
    }
}*/

int main () {
    /*
    //aloque memoria para um array de 10 numeros e ponto flutuante
    float *pont1 = (float *)malloc(10 * sizeof(float));
    if (pont1 == NULL) {
        printf("Erro\n");
        exit(1);
    }
    for (int i=0; i < 10; i++) {
        pont1[i] = (float) i * 3;
    }
    for (int i=0; i < 10; i++) {
        printf("%f\n", pont1[i]);
    }
    free(pont1);

    //recebe um inteiro e aloca dinamicamente um array de inteiros do tamanho recebido, peça ao utilizador para preencher o array
    int tamanho;
    printf("Entre com o tamanho desejado para o array:\n");
    scanf("%d", &tamanho);
    int *pont2 = (int *)malloc(tamanho * sizeof(int));
    if (pont2 == NULL) {
        printf("Erro\n");
        exit(1);
    }
    //verificaMalloc(pont2);
    for (int i=0; i < tamanho; i++) {
        printf("Digite um numero:\n");
        scanf("%d", &pont2[i]);
    }
    for (int i=0; i < tamanho; i++) {
        printf("%d\n", pont2[i]);
    }
    free(pont2);

    //receba numeros do usuario ate que ele entre 0
    int aux, tamanho = 0;
    int *pont3 = (int *)malloc(10 * sizeof(int));
    while (1) {
        printf("Digite um numero:\n");
        scanf("%d", &aux);
        if (aux != 0) {
            pont3[tamanho] = aux;
            tamanho++;
        } else {
            break;
        }  
    }

    int *pont3_novo = (int *)realloc(pont3, tamanho * sizeof(int));
    //free(pont3);
    for (int i=0; i < tamanho; i++) {
        printf("%d\n", pont3_novo[i]);
    }
    //printf("tamanho: %d\n", tamanho);
    free(pont3_novo);
    
    //aloque a memoria e leia a string naquele espaço
    char *pont4 = (char *)malloc(10 * sizeof(char));
    if (pont4 == NULL) {
        printf("Erro\n");
        exit(1);
    }
    printf("Entre com uma palavra:\n");
    scanf("%s", pont4);
    printf("palavra do dia: %s\n", pont4);
    free(pont4);

    //aceite um array de inteiros e retorne um novo array contendo apenas os numeros pares. Aloque dinamicamente esse novo array.
    int nums[10];
    for (int i=0; i < 10; i++) {
        printf("Digite um numero:\n");
        scanf("%d",&nums[i]);
    }
    int contador = 0;
    for (int i=0; i < 10; i++) {
        if (nums[i]%2 == 0) {
            contador++;
        }
    }
    int *pont5 = (int *)malloc(contador * sizeof(int));
    int j = 0;
    for (int i=0; i < 10; i++) {
        if (nums[i]%2 == 0) {
            pont5[j] = nums[i];
            j++;
        }
    }
    for (int i=0; i < contador; i++) {
        printf("%d... ", pont5[i]);
    }
    printf("\n");
    free(pont5);*/
    
    //aloque memoria e armazene os estudantes dinamicamente
    int num;
    printf("Entre com o tamanho da turma:\n");
    scanf("%d", &num);
    Aluno *turma = (Aluno *)malloc(num * sizeof(Aluno));
    for (int i = 0; i < num; i++) {
        printf("Entre com as informacoes do aluno %d.\n", i);
        printf("Entre com o nome:\n");
        scanf("%s", turma[i].nome);
        printf("Entre com a matricula:\n");
        scanf("%d", &turma[i].matricula);
        printf("Entre com a nota:\n");
        scanf("%f", &turma[i].nota);
    }
    for (int i = 0; i < num; i++) {
        printf("Aluno -- Nome: %s / Matricula: %d / Nota: %.2f.\n", turma[i].nome, turma[i].matricula, turma[i].nota);
    }
    free(turma);

    return 0;
}