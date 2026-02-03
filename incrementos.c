#include <stdio.h>

int main () {

    /*
Incrementos ++
Pré-incremento ++a
Pós-incremento a++
Decrementos ++
Pré-decremento --a
Pós-decremento a--
*/

int numero1 = 1, resultado;

printf("Antes do incremnto: %d\n", numero1);

resultado = ++numero1;
printf("Depois do incremnto - Número 1: %d - Resultado: %d\n", numero1, resultado);

numero1 --;
printf("Depois do decremnto: %d\n", numero1);



return 0;
}