#include<stdio.h>
#define SUM(a,b) (a+b)
#define PRODUCT(a,b) (a*b)
int main()
{
    int num1,num2;
    printf("Enter two No : ");
    scanf("%d%d",&num1,&num2);

    printf("\n SUM(X,Y) = %d\n",SUM(num1,num2));
    printf("\n  PRODUCT(X,Y) = %d\n",PRODUCT(num1,num2));
}
