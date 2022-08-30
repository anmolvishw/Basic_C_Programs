#include<stdio.h>
void main()
{
    char string[30];
    int count=0;
    printf("Enter the name : ");
    scanf("%[^\n]s",string);

    printf("Entered String : %s",string);

    for(int i=0; string[i]!='\0';i++)
    {
        count++;
    }

    printf("\n Total Entered Character : %d",count);

}

