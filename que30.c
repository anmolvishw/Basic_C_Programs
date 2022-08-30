#include<stdio.h>
#include<ctype.h>
void main()
{
    char word[100];
    int i,count;
    char ch;

    printf("Enter Your Word : \n");
    scanf("%[^\n]s",word);

    printf("\nYour Entered Word : %s\n",word);

    printf("After Upper Convert : ");
    for(i=0; word[i]>'\0'; i++)
    {
        if(islower(word[i]))
            ch=toupper(word[i]);
        else
            ch=toupper(word[i]);

        printf("%c",ch);
    }
    printf("\n");
}
