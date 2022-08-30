#include <stdio.h>
void disp(int val)
{
   printf("%d ", val);
}
int main()
{
   int arr[5]={66,55,44,33,22};
   for (int i=0; i<5; i++)
   {
       // passed each element to function & print
       disp (arr[i]);
   }

   return 0;
}
