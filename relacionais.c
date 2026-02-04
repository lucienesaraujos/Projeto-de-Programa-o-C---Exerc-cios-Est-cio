#include <stdio.h>

int main () {
{
    int a = 20;
    int b = 20;

    printf("a > b: %d\n", a > b);
    printf("a < b: %d\n", a < b);
    printf("a = b: %d\n", a = b);
    printf("a == b: %d\n", a == b);
    printf("a >= b: %d\n", a >=b);
    printf("a <= b: %d\n", a <= b);
    printf("a != b: %d\n\n\n", a != b);

//0 = não e 1 = sim
}

{
    int a = 5;
    float b = 5.0;

    printf("a > b: %d\n", a > b);
    printf("a < b: %d\n", a < b);
    printf("a = b: %d\n", a = b);
    printf("a == b: %d\n", a == b);
    printf("a >= b: %d\n", a >=b);
    printf("a <= b: %d\n", a <= b);
    printf("a != b: %d\n\n\n", a != b);
   
}
  
{
    float a = 10.2;
    int b = 10;

    printf("a > b: %d\n", (float)a > b);
    printf("a < b: %d\n", (float) a < b);
    printf("a == b: %d\n", (float) a == b);
    printf("a >= b: %d\n", (float) a >=b);
    printf("a <= b: %d\n", (float) a <= b);
    printf("a != b: %d\n", (float) a != b);
   
}

return 0;
}