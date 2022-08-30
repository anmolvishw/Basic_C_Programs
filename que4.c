#include<stdio.h>
int main()
{
    int arr1[2][2],arr2[2][2];   // 2-D array
    // value assign
    printf(" Please enter the first array value : ");
        for(int i=0; i<2; i++)
        {
            for(int j=0; j<2; j++)
            {
                scanf("%d",&arr1[i][j]);
            }
        }

    printf("\n Please enter the Second array value : ");
        for(int i=0; i<2; i++)
        {
            for(int j=0; j<2; j++)
            {
                scanf("%d",&arr2[i][j]);
            }
        }
    // printing array values in Console
    printf("\n Values are of first array \n");
         for(int i=0; i<2; i++)
        {
            for(int j=0; j<2; j++)
            {
                printf("%d ",arr1[i][j]);
            }
            printf("\n");
        }

    printf("\n Values are of first array \n");
         for(int i=0; i<2; i++)
        {
            for(int j=0; j<2; j++)
            {
                printf("%d ",arr2[i][j]);
            }
            printf("\n");
        }

    // sum of two array arr1+arr2 values

    printf(" \n Sum of two array result is : \n");
         for(int i=0; i<2; i++)
        {
            for(int j=0; j<2; j++)
            {
                printf("%d ",(arr1[i][j]+arr2[i][j]));
            }
            printf("\n");
        }
        return 0;
}

