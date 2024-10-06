#include<stdio.h>

void main(){
    char grade;

    printf("Enter the Grade using : \n");
    printf("Enter 'E' for => Excellent\n  Enter 'V' for => Very-Good\n  Enter 'G' for => Good\n  Enter 'A' for => Average\n  Enter 'F' for => Fail\n");

    scanf("%c",&grade);

    switch(grade){
        case 'E' :
        case 'e' :
            printf("Excellent");
            break;
        case 'V' :
        case 'v' :
            printf("Very Good");
            break;

        case 'G' :
        case 'g' :
            printf("Good");
            break;
        case 'a' :
        case 'A' :
            printf("Average");
            break;
        case 'F' :
        case 'f' :
            printf("Fail");
            break;

        default :
            printf("Invalid Input");

    }
}
