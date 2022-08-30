#include<stdio.h>
#include <string.h>

main ()
{
    int p=0,q=0,ch=0,total_ch=0;
    char str[20];
    printf ("Enter Your Name : ");
    scanf ("%[^\n]s",&str);
    printf ("\n You Entered : %s ",str);

    for (int i=0; str[i]>'\0';i++)
    {
        if(str[i] == '1' || str[i] == '2' || str[i] == '3' || str[i] == '4'
            || str[i] == '5' || str[i] == '6' || str[i] ==  '7' || str[i] == '8'
            ||  str[i] == '9' || str[i]== '0')
            {
                q++;
            }

         if(str[i] == '!' || str[i] == '@' || str[i] == '#' || str[i] == '$'
            || str[i] == '%' || str[i] == '^' || str[i] == '&' || str[i] == '*'
            || str[i] == '(' || str[i] == ')' || str[i] == '-' || str[i] == '{'
            || str[i] == '}' || str[i] == '[' || str[i] == ']' || str[i] == ':'
            || str[i] == ';' || str[i] == '"' || str[i] == '\'' || str[i] == '<'
            || str[i] == '>' || str[i] == '.' || str[i] == '/' || str[i] == '?'
            || str[i] == '~' || str[i] == '`' )


        {
           p++;
        }
        if((str[i]>=65 && str[i]<=90)|| (str[i]>=97 && str[i]<=122) )
        {
            ch++;
        }

    total_ch++;
}
        printf("\n Total Charcters Present : %d",total_ch);
        printf("\n Total character Present : %d",ch);
        printf("\n Total No Present : %d",q);
        printf("\n Total Symbol Present : %d",p);
}

