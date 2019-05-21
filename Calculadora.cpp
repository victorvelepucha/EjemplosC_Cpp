#include <stdio.h>


void Suma(int a, int b)
{
    int c;
    extern int variableExterna;//mediante extern digo que esta varible global esta definida en otro archivo
    variableExterna = 5;
    c = a+b;
    printf(" la suma es:  %d + %d = %d", a, b, c);
}
 
