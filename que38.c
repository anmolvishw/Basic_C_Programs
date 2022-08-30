#include<stdio.h>
#include<stdlib.h>
main(){
    FILE *f;
    char ch;
    f=fopen("file.txt","w");
    if (f==NULL)
    {
        printf("File Missing and Error !");
        exit(1);
    }
    printf ("\n Enter your msg : ");
    // for writing : in FILE
    while ((ch=getchar())!='\n')
       {
          putc(ch,f);
       }
    fclose(f);

    // for printing : IN FILE
    f=fopen("file.txt","r");
    printf ("\n It Is In Your File : ");
                while ((ch=fgetc(f))!=EOF)
                {
                    putchar(ch);
                }
    fclose(f);

}
