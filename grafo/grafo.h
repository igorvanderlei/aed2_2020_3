#ifndef GRAFO_H
#define GRAFO_H

typedef struct grafo {
	int v;
	char *mapa;
	int **matriz;
} grafo;

void inicializar (grafo *g, int tamanho);

void imprimir(grafo *g);

void adicionarAresta(grafo *g, char v1, char v2);

#endif
