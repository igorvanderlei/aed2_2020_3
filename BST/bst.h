#ifndef BST_H
#define BST_H
typedef struct no {
	int chave;
	struct no *esq;
	struct no *dir;	
} no;
//Op 1
no* inserir(no *raiz, int chave);
//Op 2
void preorder(no *raiz);
//Op 3
void inorder(no *raiz);
//Op 4
void posorder(no *raiz);
//Op 5
no* remover(no *raiz, int chave);
//Op 6
no* maior(no *raiz);
//Op 7
no* menor(no *raiz);
//Op 8
int altura(no *raiz);
//Op 9
int quantidade_elementos(no *raiz);
//Op 10
int existe(no *raiz, chave); //Retornar 1(existe) ou 0(não existe)
//Op 11
no* predecessor(no *raiz);
//Op 12
no* sucessor(no *raiz);




#endif
