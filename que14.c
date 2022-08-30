#include<stdio.h>
int main()
{
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};   // 2 & multi-D array
    // printing array values in Console
    printf("\n Values are : \n ");

        for ( int i = 0; i < 3; i++)
        {
          for ( int j = 0; j < 3; j++)
            {
                printf(" %d ", arr[i][j]);
            }
          printf("\n");
        }


    printf("\n Upper triangle in matrix \n");

      for ( int i = 0; i < 3; i++)
      {
          for ( int j = 0; j < 3; j++)
            {
             if( i > j )
                printf(" 0 ");
             else
                printf(" %d ", arr[i][j]);
          }
          printf("\n");
   }
}

