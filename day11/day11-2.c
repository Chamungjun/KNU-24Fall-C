#include <stdio.h>
#include <math.h>
int main() {
    double a, b; 
    int n;
       

    
    printf("���� ������ �Է��ϼ��� (a b): ");
    scanf_s("%lf %lf", &a, &b);

    printf("���� Ƚ�� n�� �Է��ϼ���: ");
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
        printf("n = %d�� �� ���а�: %f\n", i, sum);
        
    }

    return 0;
}
