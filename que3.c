#include<stdio.h>
int main()
{
    int arr[2][2][2];   // 3-D array
    // value assign
        for(int i=0; i<2; i++)
        {
            for(int j=0; j<2; j++)
            {
                for(int k=0; k<2; k++)
                    scanf("%d",&arr[i][j][k]);
            }
        }
    // printing array values in Console
         printf("\n Values are  \n");
         for(int i=0; i<2; i++)
        {
            for(int j=0; j<2; j++)
            {
                for(int k=0; k<2; k++)
                    printf("%d ",arr[i][j][k]);
            printf("\n");
            }
            printf("\n");
        }

        return 0;

}


