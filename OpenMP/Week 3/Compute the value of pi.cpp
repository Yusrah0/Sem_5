#include <stdio.h>
#include <stdlib.h>
#include <omp.h>
#define num 1000000
int main(int argc, char *argv[]) {
	    int count=0,i;
	#pragma omp parallel 
	{
		int local=0;
	#pragma omp for
	for(i=0;i<num;i++){
	double x=(double)rand()/RAND_MAX;
		double y=(double)rand()/RAND_MAX;
		if(x*x+y*y<=1.0){
			local++;
		}
	}
	#pragma omp atomic
	count+=local;
}
	double pi=4.0*count/num;
		printf("the estimated value of pi is %f\n",pi);
	return 0;
}
