#include<stdio.h>
void eligibilty(float math,float chem,float phy);


void main(){

    float math,chem,phy;

    printf("Enter Math, Chemistry, Physics");
    scanf("%f %f %f",&math,&chem,&phy);

    eligibilty(math,chem,phy);
}


void eligibilty(float math,float chem,float phy){

    if((math >= 65 && chem >= 50 && phy >= 55 && ((math+chem+phy)==190)) || ((math+phy)>= 140))
        printf("You Are Eligible to Admission :)");
    else
        printf("You Are not Eligible to Admission (: ");


}

