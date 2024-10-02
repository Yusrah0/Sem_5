#include <stdio.h>
#include <stdlib.h>
#include <omp.h>
int main(int argc, char *argv[]) {
	#pragma omp parallel num_threads(30)
	{
		printf("Hello World!\n");
	}
	return 0;
}

