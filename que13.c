#include<stdio.h>
int main()
{
    int a,b,*x,*y;

    printf("Enter the two Values : ");
    scanf("%d%d",&a,&b);
    x=&a;
    y=&b;

    if(*x==*y)
    {
        printf("\n%d equals to %d.",*x,*y);
    }
    else if(*x>*y){
        printf("\n%d is greater .",*x);
    }
    else{
        printf("\n%d is greater .",*y);
    }

    return 0;

}
