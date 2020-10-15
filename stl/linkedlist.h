#ifndef LINKED_LIST
#define LINKED_LIST

struct no {
    int valor;
    struct no * proximo;
};

struct no * inserir (struct no * lista, int valor);
void exibir(struct no * lista);
struct no * inverter(struct no * lista);

#endif
