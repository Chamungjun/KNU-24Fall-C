#include <stdio.h>
#include <math.h>
int main() {
    double a, b; 
    int n;
       

    
    printf("적분 구간을 입력하세요 (a b): ");
    scanf_s("%lf %lf", &a, &b);

    printf("시행 횟수 n을 입력하세요: ");
    scanf_s("%d", &n);

    
    
    for (int i = 1; i <= pow(2, n); i *= 2) {
        double x = a;
        double sum = 0;
        double h = (b - a) / i;
        for (int j = 0; j < i; j++) {
            double w = (-1) * log(1 / x) + sin(x);
            sum += h * w;
            x += h;
        }
        printf("n = %d일 때 적분값: %f\n", i, sum);
        
    }

    return 0;
}
