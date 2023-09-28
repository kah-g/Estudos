#include "refeicoes.h"

//todas as refeicoes teram um codigo por tipo, para facilitar a verificao de repeticao

struct acompanhamento1 {
    int cod;
    char* nome;
};

struct acompanhamento2 {
    int cod;
    char* nome;
};

struct sobremesaJantar {
    int cod;
    char* nome;
};

struct sopa {
    int cod;
    char* nome;
};

struct almoco {
    //o tipo sao, 1-carne, 2-peixe e 3-outro
    int cod;
    char* nome;
    int tipo;
};

struct sobremesa {
    //se for fruta e 1 caso nao seja, 0
    int cod;
    char* nome;
    int fruta;
};

struct lanche {
    int cod;
    char* principal;
    Acompanhamento1* acompanhamentoSolido;
    Acompanhamento2* acompanhamentoLiquido;
};

struct jantar {
    int cod;
    Sopa *sopaAlmoco;
    char* nome;
    SobremesaJantar* sobremesaJ;
};

void escolheRefeicaoCriar () {
    printf("Que tipo de refeicao deseja criar? Escolha a opcao que correponde.\n");
    printf("1-Sopa \n2-Almoco \n3-Sobremesa \n4-Lanche \n5-Jantar\n");
    printf("6-Acompanhamento Lanche Solido \n7-Acompanhamento Lanche Liquido \n8-Acompanhamento Lanche Liquido \n9-Sobremesa Jantar\n");
    int opcao = 0;
    scanf("%d", &opcao);
    switch (opcao) {
        case 1:
            
    }
}