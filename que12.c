#include<stdio.h>
int main()
{
    int a=20,b=30;
    int *x;
    // subtraction in a pointer or a variable value
    x=&a;

    printf("First Value = %d\n",*x);
    printf("Second Value = %d\n",b);

    printf("\n Subtraction of first - second val = %d\n",(*x-b));
}
