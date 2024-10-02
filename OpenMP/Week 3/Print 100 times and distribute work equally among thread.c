#include <stdio.h>
#include <stdlib.h>
#include <omp.h>
int main(int argc, char *argv[]) {
#pragma omp parallel num_threads(10)
{
	int i;
#pragma omp for
for(i=0;i<100;i++){
	printf("Hello World %d from thread %d\n",i+1,omp_get_thread_num());
}
}
	return 0;
}
