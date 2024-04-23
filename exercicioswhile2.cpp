#include <iostream>

int main(){
    int numero, 
    soma = 0;

  printf("Digite um número: ");
  scanf("%d", &numero);

  while (numero > 0)  {

    soma += numero % 10;
    numero /= 10;
  } 
    printf("Soma dos dígitos: %d\n", soma);
    
    return 0; 
     
}