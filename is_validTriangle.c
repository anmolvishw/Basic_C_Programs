#include<stdio.h>

void main(){
    int a,b,c;

    printf("Enter the Side One, Two & Three\n");
    scanf("%d %d %d",&a,&b,&c);

    if((a+b+c)==180)
        printf("It is valid triangle\n");
    else
        printf("It is not valid triangle\n");
}
