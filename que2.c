#include<stdio.h>
int main()
{
    int arr[3][3];   // 2-D array
    // value assign
        for(int i=0; i<3; i++)
        {
            for(int j=0; j<3; j++)
            {
                scanf("%d",&arr[i][j]);
            }
        }
    // printing array values in Console
         printf("\n Values are  \n");
         for(int i=0; i<3; i++)
        {
            for(int j=0; j<3; j++)
            {
                printf("%d ",arr[i][j]);
            }
            printf("\n");
        }

        return 0;

}

