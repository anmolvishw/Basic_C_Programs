#include<stdio.h>
#include<string.h>
void main()
{
    char str1[25],str2[25];
    int error=0,i=0;

    printf("Enter the Two Strings : ");
    scanf("%[^\n]s",str1);
    fflush(stdin);
    scanf("%[^\n]s",str2);

    printf("\n Entered strings : 1. %s\t 2. %s\n",str1,str2);

    while(str1[i]!='\0' && str2[i]!='\0')
    {
        if(str1[i]!=str2[i])
        {
            error=1;
            break;
        }
        i++;
    }
    if(error==0)
        printf("\n Str1 or str2 Matched.");
    else
        printf("\n Str1 or Str2 Not Matched.");
}
