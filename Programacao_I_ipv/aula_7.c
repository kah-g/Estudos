#include <stdio.h>

int main () {

    FILE *arquivo;
    /*
    //2. crie um novo ficheiro de texto e escreva 'ola mundo' e o imprme
    arquivo = fopen("arquivo.txt", "w+");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }
    if (fprintf(arquivo, "Ola mundo!") > 0) {
        printf("Dados escritos com sucesso.\n");
    } else {
        printf("Falha ao escrever dados.\n");
    }
    
    //1. programa que abre um ficheiro em modo somente leitura, le o conteudo e o imprime
    arquivo = fopen("arquivo.txt", "r");
    char frase[40];
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }
    if(fgets(frase, sizeof(frase), arquivo) != NULL) {
        printf("Arquivo lido: %s\n", frase);
    } else {
        printf("Falha ao ler dados.\n");
    }

    //3.anexar uma string ao ficheiro
    arquivo = fopen("arquivo.txt", "a+");
    char frase2[25] = "Obrigado por me receber.";
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }
    if (fputs(frase2, arquivo) != EOF) {
        printf("Dados escritos com sucesso.\n");
    } else {
        printf("Falha ao escrever dados.\n");
    }

   //4.le um numero inteiro de um ficheiro e o imprime
   arquivo = fopen("arquivo2.txt", "r");
   int num;
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }
    if (fscanf(arquivo, "%d", &num) == 1) {
        printf("Numero lido: %d.\n", num);
    } else {
        printf("Falha ao ler a linha.\n");
    }

    //5.abre um ficheiro, conta o numero de linha e imprime
    arquivo = fopen("arquivo3.txt", "r");
    int contador = 0;
    int num2;
    char linhas[10];
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }
    while (1) {
        if (fgets(linhas, sizeof(linhas), arquivo) != NULL) {
            printf("Linha: %s", linhas);
            contador++;
        } else {
            break;
        }
    }
    printf("\nTotal de linhas %d.\n", contador);
    */
    //6.leia um ficheiro de texto e substitua todas as ocorrencias de uma palavra especifica por outra palavra, guardando o conteudo po conteudo modificado num novo ficheiro
    FILE *arquivo2;
    arquivo = fopen("arquivo3.txt", "r");
    arquivo2 = fopen("arquivo4.txt", "w+");

    fclose (arquivo);
    return 0;
}