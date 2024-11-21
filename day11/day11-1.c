#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c; 
    double dis, root1, root2;

    
    printf("이차방정식의 계수를 입력하세요 (a b c): ");
    scanf_s("%lf %lf %lf", &a, &b, &c);

    if (a == 0) {
        printf("a는 0이 될 수 없습니다. 이차방정식이 아닙니다.\n");
        return 1;
    }

    
    dis = b * b - 4 * a * c;

    if (dis > 0) { 
        root1 = (-b + sqrt(dis)) / (2 * a);
        root2 = (-b - sqrt(dis)) / (2 * a);
        printf("두 실근: %.2lf, %.2lf\n", root1, root2);
    }
    else if (dis == 0) { 
        root1 = -b / (2 * a);
        printf("중근: %.2lf\n", root1);
    }
    else { 
        printf("허근이 존재하므로 실근이 없습니다.\n");
    }
    return 0;
}
