#include<stdio.h>
void main()
{
    struct student_details{
        int roll_no;
        char full_name[50];
        int marks;
    };

    int n;
    printf("No of student : ");
    scanf("%d",&n);
        struct student_details student[n];
    for(int i=0; i<n; i++)
    {
        printf("\n Enter the details student no %d : ",i+1);
        printf("\n Enter the Roll no : ");
            scanf("%d",&student[i].roll_no);
            fflush(stdin);
        printf("\n Enter the Full Name : ");
            scanf("%[^\n]s",&student[i].full_name);
        printf("\n Enter the Marks : ");
            scanf("%d",&student[i].marks);

    }
    printf(" \n Filled details are :");
    for(int i=0; i<n; i++)
    {
        printf("\nThe details of student  %d : ",i+1);
        printf("\n Roll No       : %d",student[i].roll_no);
        printf("\n Full Name     : %s",student[i].full_name);
        printf("\n Marks :       : %d",student[i].marks);
    }

}
