	#include <stdio.h>
#include <stdlib.h>
#include <omp.h>
int main(int argc, char *argv[]) {
	int tid;
#pragma omp parallel num_threads(5)
{
	 tid=omp_get_thread_num();
	printf("Hello World! from thread %d\n",tid);
}
	return 0;
}
	
