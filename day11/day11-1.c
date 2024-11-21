#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c; 
    double dis, root1, root2;

    
    printf("������������ ����� �Է��ϼ��� (a b c): ");
    scanf_s("%lf %lf %lf", &a, &b, &c);

    if (a == 0) {
        printf("a�� 0�� �� �� �����ϴ�. ������������ �ƴմϴ�.\n");
        return 1;
    }

    
    dis = b * b - 4 * a * c;

    if (dis > 0) { 
        root1 = (-b + sqrt(dis)) / (2 * a);
        root2 = (-b - sqrt(dis)) / (2 * a);
        printf("�� �Ǳ�: %.2lf, %.2lf\n", root1, root2);
    }
    else if (dis == 0) { 
        root1 = -b / (2 * a);
        printf("�߱�: %.2lf\n", root1);
    }
    else { 
        printf("����� �����ϹǷ� �Ǳ��� �����ϴ�.\n");
    }
    return 0;
}
