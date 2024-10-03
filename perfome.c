#include<stdio.h>

void main(){
    char ch;
    float a,b;

    printf("Enter The Expression : ");
    scanf("%c",&ch);

    switch(ch){
        case '+':
            printf("Enter the a and b value ");
            scanf("%f %f",&a,&b);
            printf("%.2f + %.2f = %.2f",a,b,a+b);
            break;
        case '-':
             printf("Enter the a and b value ");
            scanf("%f %f",&a,&b);
            printf("%.2f - %.2f = %.2f",a,b,a-b);
             break;
        case '/':
             printf("Enter the a and b value ");
            scanf("%f %f",&a,&b);
            printf("%.2f / %.2f = %.2f",a,b,a/b);
             break;
        case '*':
             printf("Enter the a and b value ");
            scanf("%f %f",&a,&b);
            printf("%.2f * %.2f = %.2f",a,b,a*b);
             break;

        default :
            printf("Invalid input");
        }
}
