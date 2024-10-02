#include <stdio.h>
#include <stdlib.h>
#include <omp.h>
#include <time.h>
int main() {
    // Seed the random number generator
    srand(time(NULL));
    int i;
    #pragma omp parallel num_threads(4)
    {
        int thread_id = omp_get_thread_num();
        for (i = 0; i < 100; i++) {
            if (rand() % 4 == thread_id) {
                printf("Thread %d: Hello World!\n", thread_id);
            }
        }
    }

    return 0;
}
