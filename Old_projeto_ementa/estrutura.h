#ifndef ESTRUTURA_H
#define ESTRUTURA_H

#include "refeicoes.h"

#include <time.h>

typedef struct dia Dia;
typedef struct celulaMes CelulaMes;
typedef struct mes Mes;

char* mesChar (int mes);
int calculaDiasMes (int ano, int mes);
int calculaDiaSemana (int dia, int ano, int mes);
char* semanaChar (int diaSemana);

Mes* inicializaMes (int ano, int mes);

void printaDiaArquivo (Dia *dia, FILE *arquivo);
void printaMesArquivo (Mes *mes, FILE *arquivo);
void liberaDia (CelulaMes* cm);
void liberaMes (Mes* mes);

#endif