#include<stdio.h>
#include<math.h>

void main(){

float bmi,mass,height;


    printf("Enter the mass and height : ");
    scanf("%f %f",&mass,&height);

    bmi = (703 * mass) / sqrt(height);

    if(bmi < 18.5)
        printf("UnderWeight");
    else if(bmi < 24.9)
        printf("Normal Weight");
    else if (bmi < 29.9)
        printf("OverWeight");
    else
        printf("Obesite");

}
