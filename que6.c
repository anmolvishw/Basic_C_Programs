#include<stdio.h>
int print_array(int*);
int main()
{
    int arr[5]={99,520,44,85,012};   // 1-D array & asign
    // printing array values in Console
    // by using function
    print_array(arr);

    return 0;
}
int print_array(int *arr)
{
     printf(" values are : ");
        for(int i=0;i<5; i++)
            printf("%d ",arr[i]);

}

