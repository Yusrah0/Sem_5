#include <stdio.h>
#include <stdlib.h>
#include <omp.h>
int main(int argc, char *argv[]) {
int n,fact=1,num;
printf("Enter the number\n");
scanf("%d",&n);
#pragma omp parallel num_threads(n)
{
num=omp_get_thread_num();
	fact*=(num+1);
}
printf("Factorial of %d is %d",n,fact);
}
