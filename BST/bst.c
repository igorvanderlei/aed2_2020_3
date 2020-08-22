#include <stdio.h>
#include <stdlib.h>
#include "bst.h"


no* inserir(no *raiz, int chave) {
	//Caso Base
	if(raiz == NULL) {
		no * novo;
		//Passo 1 - Alocar memória
		novo = (no*) malloc (sizeof(no)); 
		//Passo 2 - Inicializar Valores
		novo->chave = chave;
		novo->esq = NULL;
		novo->dir = NULL;
		//Passo 3 - Retornar o ponteiro para o nó que foi criado
		return novo;
	} else {
		//Verificar se o valor deve ser inserido na esquerda (<) ou direita (>)
		if(chave > raiz->chave) {
			raiz->dir = inserir(raiz->dir, chave);
		} else {
			raiz->esq = inserir(raiz->esq, chave);				
		}
		return raiz;		
	}
}

void preorder(no *raiz) {
	if(raiz != NULL) {
		printf("[%d]", raiz->chave);
		preorder(raiz->esq);
		preorder(raiz->dir);
	}
}
