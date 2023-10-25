#include <stdio.h>
#include <math.h>

typedef struct ponto {
    float x;
    float y;
} Ponto;

typedef struct retangulo {
    float largura;
    float altura;
} Retangulo;

typedef struct conta_bancaria {
    int numConta;
    char nome[10];
    float saldo;
} contaBancaria;

typedef struct aluno {
    char nome[10];
    int matricula;
    float notas[3];
} Aluno;

typedef struct tempo {
    int horas;
    int minutos;
    int segundos;
} Tempo;

typedef struct livro {
    char titulo[15];
    char autor [15];
    int anoPublicacao;
}

float calculaDistancia (Ponto a, Ponto b) {
    float deltaX = pow((b.x - a.x), 2);
    float deltaY = pow((b.y - a.y), 2);
    float distancia = sqrt(deltaX) + (deltaY);
    return distancia;
}

/*float calculaArea (Retangulo ret) {
    
}*/

void depositarConta (contaBancaria *cb) {
    printf("Quanto deseja depositar na conta?\n");
    double valor = 5;
    scanf("%lf", &valor); //erro aqui
    printf("%f\n", valor);
    cb->saldo += valor;
    printf("O saldo atual da conta e: %.2f.\n", cb->saldo);
}

void maiorNota (Aluno turma[]) {
    float nota = 0;
    int melhor, posicao = 0;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 3; j++) {
            if (turma[i].notas[j] >= nota) {
                nota = turma[i].notas[j];
                melhor = i;
                posicao = j;
            }
        }
    }
    printf("O aluno com a maior nota e: %s, com a nota %.2f.\n", turma[melhor].nome, turma[melhor].notas[posicao]);
}

int tempoSegundos (Tempo t) {
    int segundos = 0;
    segundos += t.horas * 3600;
    segundos += t.minutos  * 60;
    segundos += t.segundos;
    return segundos;
}

int main () {
    /*Ponto a, b;
    printf("Entre com a primeira coordenada do ponto A:\n");
    scanf("%f", &a.x);
    printf("Entre com a segunda coordenada do ponto A:\n");
    scanf("%f", &a.y);
    printf("Entre com a primeira coordenada do ponto B:\n");
    scanf("%f", &b.x);
    printf("Entre com a segunda coordenada do ponto B:\n");
    scanf("%f", &b.y);
    float distancia = calculaDistancia(a,b);
    printf("A distancia entre os pontos A e B e: %.2f\n", distancia);

    contaBancaria cb;
    cb.numConta = 001;
    printf("Qual o nome do usuario?\n");
    scanf("%c", cb.nome);
    cb.saldo = 100.0;
    contaBancaria *pcb = &cb;
    depositarConta (pcb);

    Aluno turma[5] = {{"Maria", 001, {7.5, 6.2, 4.1}}, {"Joao", 002, {9.1, 9.6, 10}}, {"Carol", 003, {8.7, 3.9, 7}}, {"Marco", 004, {6.9, 5.3, 7.2}}, {"Gloria", 005, {9.6, 9.8, 8.3}}};
    maiorNota(turma);

    Tempo horaAtual;
    printf("Entre com as horas:\n");
    scanf("%d", &horaAtual.horas);
    printf("Entre com os minutos:\n");
    scanf("%d", &horaAtual.minutos);
    printf("Entre com os segundos\n");
    scanf("%d", &horaAtual.segundos);
    printf("Segundos: %d.\n", tempoSegundos(horaAtual));*/

    Livro estante[3] = {{"crepusculo", "stephany", 2009}, {"harry potter", "rowling", 199}, {"after", "desconhecida", 2012}};

    return 0;
}