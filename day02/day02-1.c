#include<stdio.h>
int main()
{
	int num;
	printf("���� Ÿ�� : ");
	scanf_s("%d", &num);

	double num1, num2;
	printf("ù��° ���� : ");
	scanf_s("%lf", &num1);
	printf("�ι�° ���� : ");
	scanf_s("%lf", &num2);

	double result = 0;
	if (num == 1) {
		result = num1 + num2;
	}
	else if (num == 2) {
		result = num1 - num2;
	}
	else if (num == 3) {
		result = num1 * num2;
	}
	else if (num == 4) {
		result = num1 / num2;
	}
	printf("result = %lf", result);

	return 0;

}