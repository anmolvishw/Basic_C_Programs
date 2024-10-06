#include<stdio.h>

int menu();
int auth();
void choice(int option);
int pin = 1234;
float bal=7499.49;  // deafult amt
char ch='Y';

void main(){

    int val = auth();
    if(val == 1){
        do{
        printf("\t \t Hello, Admin\n ");
        printf("--------------------------------------------------\n ");
        int option =  menu();
        if(option >=1 && option <=5)
            choice(option);
        else
            printf("Your input is wrong :::: Try again !\n");

        }while(ch == 'Y');
printf("Thank You || Visit again : \n ");
    }else{
        printf("Your Pin is wrong Thank you \n");
    }
}

int auth(){
    int enterpin;

    printf("Enter Pin : ");
    scanf("%d",&enterpin);

    if(pin == enterpin)
        return 1;
    else
        -1;
}

int menu(){
    int result;
    printf("1. View Balance \n 2. Withdraw\n 3. change pin\n 4. deposit \n 5. Exit \n");
    scanf("%d",&result);
    return result;
}

void choice(int option){
    float withdraw_amt;
    if(option == 1)
        printf("Currently Your Balance is : %.2f \n",bal);
    else if(option == 2){
        printf("Enter you withdraw_amt : ");
        scanf("%f",&withdraw_amt);
        if(withdraw_amt <= bal)
        {
            int res = auth();
            if(res == 1){
            bal = bal - withdraw_amt;
            printf("Your Amount has been sucessful withdraw please collect you cash  :: \n");
            choice(1);
            }else{
            printf("Your transaction failed beacause invalid pin : ");
        }
        }else{
            printf("Insufficient Balance :: \n");
        }
    }else if(option == 3){
        int newPin;

        printf("Enter your New pin : \n");
        scanf("%d",&newPin);
        pin = newPin;

        printf("Your New Pin Has been sucessfull init : \n");
        int res = auth();
            if(res == 1){
            printf("Your sucessfull validate  :: \n");
            }else{
            printf("Your pin invalid  : ");
            ch = 'N';
        }

    }else if(option == 4){
        float amt;
        printf("Enter your deposit amount : \n");
        scanf("%f",&amt);

        bal = bal + amt;
        printf("%.2f rs has been sucessfull transfer your bank : \n",amt);
    }else{
        ch = 'N';
    }
}
