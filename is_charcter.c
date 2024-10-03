#include<stdio.h>

void main(){
    char ch;

    printf("Enter The Character : ");
    scanf("%c",&ch);

    if((ch >= 65 && ch <= 90)|| (ch>=97 && ch<=122))
            printf("%c is Alphabet\n",ch);
    else
            printf("%c is not Alphabet\n",ch);


}
