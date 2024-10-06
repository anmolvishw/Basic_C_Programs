#include<stdio.h>

void main(){
float temp;

printf("Enter the temperature : \n");
scanf("%f",&temp);

if(temp <= 0)
    printf("Freezing Wheather\n");
else if(temp <= 10)
    printf("Very Cold Wheather\n");
else if(temp <= 20)
    printf("Cold Wheather\n");
else if(temp <= 30)
    printf("Normal Wheather\n");
else if(temp <=40)
    printf("Hot Wheather\n");
else
    printf("Very Hot Wheather\n");

}
