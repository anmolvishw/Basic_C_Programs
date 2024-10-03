#include<stdio.h>

void main(){
    char ch;

    printf("Enter The Character : ");
    scanf("%c",&ch);

    switch(ch){
        case 'a':
        case 'A':
        case 'E':
        case 'e':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'U':
        case 'u':
            printf("%c is vowel\n",ch);
            break;

        default :
            printf("%c is not vowel",ch);

    }
}
