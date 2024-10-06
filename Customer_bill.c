#include<stdio.h>
#include<string.h>
#include<Math.h>



void generatebill(int IDNO,float unit,char Name[]);
void main(){
    int IDNO;
    float unit;
    char Consumer_Name[50];

    printf("Enter IDNO Number\nEnter Consumed Unit\nEnter Customer name\n");
    scanf("%d %f %[^\n]%*c",&IDNO,&unit,&Consumer_Name);

    generatebill(IDNO,unit,Consumer_Name);

}

void generatebill(int IDNO,float unit,char Name[]){
    printf("\n-------------------------------\n");
    printf("Customer IDNO : %d \n",IDNO);
    printf("Customer Name : %s \n",Name);
    printf("UNIT Consumed : %.2f\n",unit);

    float total_unit;


    if(unit<200){
        total_unit = unit * 1.20;
        printf("Amount Charges @Rs. 1.20/unit : %.2f\n",total_unit);
    }else if(unit < 400){
        total_unit = unit * 1.50;
        printf("Amount Charges @Rs. 1.50/unit : %.2f\n",total_unit);
    }else if(unit < 600){
        total_unit = unit * 1.80;
        printf("Amount Charges @Rs. 1.80/unit : %.2f\n",total_unit);
    }else{
        total_unit = unit * 2.0;
        printf("Amount Charges @Rs. 2.0/unit : %.2f\n",total_unit);
    }

    float surcharge;
    if(total_unit >= 400){
            surcharge = (total_unit * 15)/100;
        printf("Surcharge Amount : %.2f\n",surcharge);
    }
    printf("-------------------------------\n");

    printf("Net Amount to be Paid by customer : %.2f\n",(total_unit + surcharge));

    printf("-------------------------------\n");
    printf("\t Thank You\n");    printf("-------------------------------\n");


}
