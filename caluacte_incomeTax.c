#include<stdio.h>
double tax_slab(double aunual_income);

void main(){
    double aunual_income;

    printf("Enter your Anunal Income : ");
    scanf("%lf",&aunual_income);

    printf("Your tax payable is : %.3lf",tax_slab(aunual_income));
}

double tax_slab(double aunual_income){
    if(aunual_income <= 250000)
        return 0;
    else if(aunual_income <= 500000)
        return (aunual_income*5)/100;
    else if(aunual_income <= 1000000)
        return (aunual_income*20)/100;
    else
        return (aunual_income*30)/100;
}

