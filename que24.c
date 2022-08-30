#include <stdio.h>
#include <string.h>
void main()
{
    char str[]="Hello World!",temp;

    int len = strlen(str);
    // use for loop to store the reverse string

    for (int i = 0; i <len-1; i++)
    {
        temp = str[i];
        str[i] = str[len-1];
        str[len-1] = temp;
        len--;
    }
    printf (" The reverse of the original string is: %s ",  str);

}
