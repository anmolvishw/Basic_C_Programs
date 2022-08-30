#include<stdio.h>
int main()
{
    int integer=20;
    char character='s';
    float floating=12.5;
    printf("--- Printing address and their hold values -----\n");

    printf("\nInteger Var address: %d",&integer);
    printf("\nInteger Var address stored : %d\n",integer);

    printf("\nFloating Var address: %d",&floating);
    printf("\nFloating Var address stored : %f\n",floating);

    printf("\nCharacter Var address: %d",&character);
    printf("\nCharacter Var address stored : %c\n",character);
}
