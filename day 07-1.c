#include <stdio.h>
int main()
{
    int a, b, c;
    int n;
    printf("�Ƕ�̵� �� ��  : ");
    scanf_s("%d", &n);
    for (a = 0; a < n; a++) {
        for (b = 0; b < n-a; b++) {
            printf(" ");
        }
        for (c = 0; c < a * 2 + 1; c++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}