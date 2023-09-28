#include "estrutura.h"

struct dia {
    //serao os dias da ementa, que terao as refeicoes
    int diaMes;
    int diaSemana;
    char* diaSemanaC;
};

struct celulaMes {
    //celula do mes, que contem um dia e um pointer apontando pro proximo dia
    Dia *dy;
    CelulaMes *prox;
};

struct mes {
    //mes, contem um pointer pro primeiro e pro ultimo dia do mes
    CelulaMes *prim;
    CelulaMes *ult;
    int anoEmenta;
    int mesEmenta;
    char* mesEmentaC; //para efeito de exibicao
    int numeroDias;
};

char* mesChar (int mes){
    //pega o mes pelo numero e retorna um char para efeitos de exibicao
    switch (mes) {
    case 1:
        return "JANEIRO";
    case 2:
        return "FEVEREIRO";
    case 3:
        return "MARCO";
    case 4:
        return "ABRIL";
    case 5:
        return "MAIO";
    case 6:
        return "JUNHO";
    case 7:
        return "JULHO";
    case 8:
        return "AGOSTO";
    case 9:
        return "SETEMBRO";
    case 10:
        return "OUTUBRO";
    case 11:
        return "NOVEMBRO";
    case 12:
        return "DEZEMBRO";
    }
}

int calculaDiasMes (int ano, int mes) {
    //essa funcao checa quantos dias tem o mes fornecido
    if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12) {
        return 31;
    }
    if (mes == 4 || mes == 6 || mes == 7 || mes == 10) {
        return 30;
    }
    if (ano % 4 == 0) {
        return 29;
    }
    else {
        return 28;
    }
}

int calculaDiaSemana (int dia, int ano, int mes) {
    //essa funcao retorna o dia da semana em int
    //achei essa funcao no stack overflow
    return (dia += mes < 3 ? ano-- : ano - 2, 23*mes/9 + dia + 4 + ano/4- ano/100 + ano/400)%7;
}

char* semanaChar (int diaSemana) {
    //pega o dia da semana pelo numero e converte em char para efeito de exibicao
    switch (diaSemana) {
    case 0:
        return "DOMINGO";
    case 1:
        return "SEGUNDA";
    case 2:
        return "TERCA";
    case 3:
        return "QUARTA";
    case 4:
        return "QUINTA";
    case 5:
        return "SEXTA";
    case 6:
        return "SABADO";
    }
}

Mes* inicializaMes (int ano, int mes) {
    //gerando um mes com o numero certo de dias para serem preenchidos
    Mes *mes01 = (Mes*) malloc (sizeof(Mes));
    mes01->anoEmenta = ano;
    mes01->mesEmenta = mes;
    mes01->mesEmentaC = strdup (mesChar(mes));
    mes01->numeroDias = calculaDiasMes (ano, mes);
    mes01->prim = NULL;
    mes01->ult = NULL;
    for (int i=0; i < mes01->numeroDias; i++) {
        //vai criar e alocar memoria para cada dia do mes
        CelulaMes *cm = (CelulaMes*) malloc (sizeof(CelulaMes));
        if (mes01->prim == NULL) {
            //setando os pointers para o primeiro dia do mes
            mes01->prim = cm;
            mes01->ult = cm;
        } else {
            //setando os pointers para os dias subsequentes ao primeiro
            mes01->ult->prox = cm;
            mes01->ult = cm;
            cm->prox = NULL;
        }
        cm->dy = (Dia*) malloc (sizeof(Dia));
        cm->dy->diaMes = i+1;
        cm->dy->diaSemana = calculaDiaSemana (cm->dy->diaMes, ano, mes);
        cm->dy->diaSemanaC = strdup (semanaChar (cm->dy->diaSemana));
    }
    return mes01;
}

void printaDiaArquivo (Dia *dia, FILE *arquivo) {
    fprintf(arquivo, "Data: %d - %s\n", dia->diaMes, dia->diaSemanaC);
}

void printaMesArquivo (Mes *mes, FILE *arquivo) {
    fprintf(arquivo, "#################### EMENTA ####################\n");
    fprintf(arquivo, "----- ANO: %d\n", mes->anoEmenta);
    fprintf(arquivo, "----- MES: %s\n", mes->mesEmentaC);
    fprintf(arquivo, "\n");
    CelulaMes *aux;
    aux = mes->prim;
    while (aux != NULL) {
        printaDiaArquivo(aux->dy, arquivo);
        aux = aux->prox;
    }
    printf("---> Ementa gerada em arquivo.\n");
}

void liberaDia (CelulaMes* cm) {
    free(cm->dy->diaSemanaC);
    free(cm->dy);
    free(cm);
}

void liberaMes (Mes* mes) {
    CelulaMes *aux = mes->prim;
    if (aux == NULL) {
        free(mes);
    } else {
        CelulaMes *aux2;
        for(int i=1; i < mes->numeroDias; i++) {
            aux2 = aux;
            aux = aux->prox;
            liberaDia (aux2);
        }
        liberaDia(aux);
        free(mes->mesEmentaC);
        free(mes);
    }
}