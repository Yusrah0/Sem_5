#include <stdio.h>
#include <omp.h>
int main(int argc, char *argv[]) {
    #pragma omp parallel for ordered
    for(int i = 1; i < 11; i++) {
    	#pragma omp ordered
    	{
	
            printf("%d\t", i);
}
	}
    return 0;
}
