#include<stdio.h>

void main(){
    int n;

    printf("Enter n value ");
    scanf("%d",&n);

    if(n%5 ==0 || n%11 ==0)
        printf("It is divisible by 5 and 11");
    else
        printf("It is not divisible by 5 and 11");
}
