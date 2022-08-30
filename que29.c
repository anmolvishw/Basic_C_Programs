#include <stdio.h>
#include <ctype.h>
void main()
{
    char word[100];
    int count, i;
    char ch;
    printf("Enter a sentence \n");
    for (i = 0;(word[i] = getchar()) != '\n'; i++)
    {
    }
    word[i] = '\0';

    count = i;
    printf("The given sentence is   : %s", word);
    printf("\n Case changed sentence is: ");
    for (i = 0; i < count; i++)
    {
        ch = islower(word[i])? toupper(word[i]) :
             tolower(word[i]);
        putchar(ch);
    }
}
