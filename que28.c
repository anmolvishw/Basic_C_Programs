#include<stdio.h>
#include <string.h>
main ()
{
    int vow=0,ch=0,con=0;
    char str[20];
    printf ("Enter Your Name : ");
    scanf ("%[^\n]s",&str);
    printf ("\n You Entered : %s ",str);

    for (int i=0; str[i]>'\0';i++)
    {
        if(str[i] == 'a' || str[i] == 'A' || str[i] == 'E' || str[i] == 'e'
            || str[i] == 'i' || str[i] == 'I' || str[i] ==  'O' || str[i] == 'o'
            ||  str[i] == 'U' || str[i]== 'u')
            {
                vow++;
            }
        else{
            con++;
        }
}
        printf("\nTotal No of Vowel : %d",vow);
        printf("\nTotal No of consonant : %d\n",con);
}


