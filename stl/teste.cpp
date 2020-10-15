#include <stdio.h>
#include "linkedlist.h"
#include <iostream>

using namespace std;
int main(int argc, char* argv[]) {
    struct no * lista1, * lista2;
    int i;
    lista1 = NULL;
    lista2 = NULL;
    for(i=1; i < 10; i++)
        lista1 = inserir(lista1, i);
    exibir(lista1);
    lista2 = inverter(lista1);
    exibir(lista2);    
}
