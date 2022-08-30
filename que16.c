#include<stdio.h>
int main()
{
   int a[3] = {7, 5, 3};
   int *p = a;

   printf(" vALUES ARE ; ");
   for (int i = 0; i < 3; i++)
   {
      printf(" %d ", *p);
      p++;
   }
    return 0;
}

