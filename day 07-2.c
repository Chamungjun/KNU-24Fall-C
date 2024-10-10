#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    int count, circle = 0;
    double x = 0;
    double y = 0;
    double pi;
    int a = 1000000000;

    srand(time(NULL));

    for (count = 1; count <= a; count++) {
        x = (double)rand() / (double)RAND_MAX;
        y = (double)rand() / (double)RAND_MAX;

        if (x * x + y * y <= 1.0) {
            circle++;
        }

        if (count % 10000000 == 0) {
            pi = (double)(circle) / (double)(count) * 4;
            double b = (double)count / a; 
            int bar = 50; 
            int full = (int)(bar * b); 

         
            printf("진행: [");
            for (int i = 0; i < bar; i++) {
                if (i < full) {
                    printf("*");
                }
                else {
                    printf(" "); 
                }
            }
            printf("] %.f%%, 원주율: %.6f\n", b * 100, pi);
        }
    }

    pi = (double)(circle) / (double)(a) * 4;
    printf("최종 원주율: %.6f\n", pi);

    return 0;
}