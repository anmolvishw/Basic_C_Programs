#include<stdio.h>

void main(){
char ch;

printf("Enter your character \n ");
scanf("%c",&ch);

if((ch >= 64 && ch <= 90) || (ch >= 97 && ch <= 122))
    printf("%c is Alphabhet",ch);
else if((ch >= 48 && ch <= 57))
    printf("%c is digit",ch);
else
    printf("%c is special symbol ",ch);

}
