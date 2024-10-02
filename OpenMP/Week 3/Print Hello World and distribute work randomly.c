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
        #pragma omp for schedule(dynamic)
        for (i = 0; i < 20; i++) {
            if (rand() % 4 == thread_id) {
                printf("Thread %d: Hello World!\n", thread_id);
            }
        }
    }

    return 0;
}
or 
#include <stdio.h>
#include <stdlib.h>
#include <omp.h>
#include <time.h>

int main() {
    int i;

    // Start the parallel region with 4 threads
    #pragma omp parallel num_threads(4) private(i)
    {
        int thread_id = omp_get_thread_num();
        unsigned int seed = time(NULL) + thread_id;  // Each thread has its own unique seed

        // Use dynamic scheduling to distribute iterations among threads
        #pragma omp for schedule(dynamic)
        for (i = 0; i < 20; i++) {
            if (rand_r(&seed) % 4 == thread_id) {
                printf("Thread %d: Hello World! (Iteration %d)\n", thread_id, i);
            }
        }
    }

    return 0;
}

