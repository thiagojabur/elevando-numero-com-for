#include <iostream>

int main()
{
   int x, n, resultado = 0;
   printf("Digite o numero n: ");
   scanf("%i", &n);
   printf("Digite o numero x: ");
   scanf("%i", &x);

   resultado = x;
   for (int i = 1; i < n; i++) {
        resultado = resultado * x;
   }
   printf("%i elevado a %i = %i", x, n, resultado);

}
