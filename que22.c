#include<stdio.h>
void main()
{
    char string[30];

    printf("Enter the name : ");
    scanf("%[^\n]s",string);

    printf("%s",string);

}
