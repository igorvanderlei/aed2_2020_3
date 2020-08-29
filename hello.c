#include <stdio.h>

void rec(int x) {
    if(x < 6) {
    printf("Entrou %d\n", x);
    rec(++x);
    printf("Saiu %d\n", x);
    }
}


int main(int argc, int *argv[]) {
rec(0);
}
