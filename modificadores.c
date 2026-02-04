#include <stdio.h>

int main () {


    {
    int numerosinal = 3000000000;
    unsigned int numerosemsinal = 3000000000;

    printf("Número com sinal: %d\n", numerosinal);
    printf("Número sem sinal: %u\n", numerosemsinal);
    }


    {
    int numeronormal = 2147483647;
    int long numeroanormal = 21474836478;
    long long int numeroanormal2 = 21474836478;


    printf("Número normal (int): %d\n", numeronormal);
    printf("Número anormal (long int): %ld\n", numeroanormal);
    printf("Número anormal 2 (long long int): %lld\n", numeroanormal2);
    }


    {
    double numeropreciso =  3.141592653589793;
    long double numeromuitopreciso = 3.141592653589793;

    printf("Preciso: %.15f\n", numeropreciso);
    printf("Muito preciso: %.21Lf\n", numeromuitopreciso);
    }


    {
    unsigned long int abc = 4000000000;
    unsigned int  def = 4000000000;
    long int ghi = 4000000000;
    int jkl = 4000000000;
    long long int mno = 4000000000;

    printf("Número grande positivo: %lu\n", abc);
    printf("Número positivo: %u\n", def);
    printf("Número grande: %ld\n", ghi);
    printf("Numero: %d\n", jkl);
    printf("Número grande: %lld\n", mno);
    }


    {
    short int numeropequeno = 32767;
    printf("Número pequeno (short int): %d\n", numeropequeno);

    numeropequeno = 32768;
    printf("Número pequeno aturalizado (short int): %d\n", numeropequeno);
    printf("\n")
    }
    return 0;

}