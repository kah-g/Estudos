#include "estrutura.h"

int pegaAno () {
    printf("Para qual ano deseja gerar a ementa?\n");
    int anoEmenta = 0;
    while (!(anoEmenta >= 2020 && anoEmenta <= 2025)) {
        //so sai desse while quando entra um ano valido
        printf("Entre o ano desejado:\n");
        scanf("%d", &anoEmenta);
    }
    return anoEmenta;
}

int pegaMes () {
    printf("Para qual mes deseja gerar a ementa?\n");
    int mesEmenta = 0;
    while (!(mesEmenta >= 1 && mesEmenta <= 12)) {
        //so sai desse while quando entra um mes valido
        printf("Entre o mes desejado, digitando um numero entre 1 e 12:\n");
        scanf("%d", &mesEmenta);
    }
    return mesEmenta;
}

int main () {
    FILE *ementa;
    ementa = fopen("ementa.txt", "a");
    printf("--------------- BEM VINDO AO GERADOR DE EMENTA ---------------\n");
    printf("Escolha uma opcao:\n");
    printf("1- Criar arquivo com mes e printar. \n2-Criar refeicao. \n9- Fechar o programa.\n");
    int opcao = 0;
    scanf("%d", &opcao);
    switch (opcao)
    {
    case 1:
        int ano = pegaAno ();
        int mes = pegaMes ();
        Mes *mesAtual = inicializaMes (ano, mes);
        printaMesArquivo (mesAtual, ementa);
        liberaMes (mesAtual);
        break;
    case 2:
        escolheRefeicaoCriar ();
        break;
    case 9:
        break;
    }
    fclose(ementa);
    return 0;
}