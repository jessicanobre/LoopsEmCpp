#include <iostream>

int main() {
    int numero;

    printf ("digite um número: ");
    scanf("%d", &numero);

    printf("Números pares entre 1 e %d:\n", numero);

    int i = 1;

    while(i <= numero)  {
        if (i % 2 == 0){

              printf("%d\n", i);
        }
        i++;
    }

    return 0;

}