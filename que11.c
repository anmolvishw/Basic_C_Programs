#include<stdio.h>
int main()
{
    int a=20,b=30;
    int *x,*y;

    x=&a;
    y=&b;

    printf("Value of *x = %d\n",*x);
    printf("Value of *y = %d\n",*y);
    printf("\n Subtraction of *x - *y = %d\n",(*x-*y));
}
