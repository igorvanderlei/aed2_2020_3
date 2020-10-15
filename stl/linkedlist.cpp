#include <stdio.h>
#include <stdlib.h>
#include "linkedlist.h"
#include <stack>
using namespace std;

struct no * inserir (struct no * lista, int valor) {
    struct no * novo = (struct no*) malloc (sizeof(struct no));
    novo->valor = valor;
    novo->proximo = NULL;
    if(lista != NULL) {
        struct no* temp = lista;
        while(temp->proximo!= NULL)
            temp = temp->proximo;
        temp->proximo = novo;
        return lista;
    } else {
        return  novo;
    }
}

void exibir(struct no * lista) {
    struct no* temp = lista;
    while(temp != NULL) {
        printf("[%d]", temp->valor);
        temp = temp->proximo;
    }   
    printf("\n");
}

struct no * inverter(struct no * lista) {
    struct no *saida = NULL;
    struct no *temp = lista;
    stack<int> pilha;

    while(temp != NULL) {
        pilha.push(temp->valor);
        temp = temp->proximo;
    }
    while(!pilha.empty()) {
        saida = inserir(saida, pilha.top());
        pilha.pop();
    }
    return saida;
}
