#include<stdio.h>
int main()
{
	int a = 10;
	int b = 20;

	swap(&a, &b);
	printf("%d, %d", a, b);

	return 0;
	
}

int swap(int* temp1, int* temp2) {
	int temp = *temp1;
	*temp1 = *temp2;
	*temp2 = temp;
}