#include <stdio.h>
    union employee {
       float salary;
       int workerNo;
    } emp;

int main() {
   emp.salary = 12.3;
      printf("Salary = %f\n", emp.salary);
   emp.workerNo = 100;

   printf("Salary = %f\n", emp.salary);
   printf("Number of workers = %d", emp.workerNo);
   return 0;
}
