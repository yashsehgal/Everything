#include <bits/stdc++.h>

using namespace std;

#define N 100;

typedef struct fila{
    int ini, fim;
    float vet[N];
} Fila;

Fila *cria() {
    Fila *f = (Fila *) malloc(sizeof(Fila));
    f -> ini = f -> fim = 0;
    return f;
}

int vazia(Fila *f) {
    if(f == NULL) {
        return 1;
    } else {
        return 0;
    }
}

void libera(Fila *f) {
    free(f);
}

void insere(FIla *f, float v) {
    if(incr(f -> fim) == f -> ini) {
        cout << "Capacidade da fila extorou!" << endl;
        exit(1);
    }
    f -> vet[f -> fim] = v;
    f -> fim = incr(f -> fim);
}

float retira(Fila *f) {
    float v;
    if(vazia(f)) {
        cout << "Fila vazia!" << endl;
        exit(1);
    }
    v = f -> vet[f -> ini];
    f -> ini = incr(f -> ini);
    return v;
}

int main() {





    return 0;
}
