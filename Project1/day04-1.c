#include<stdio.h>
int main2()
{
	char a = 'A';
	int num = 365;

	char* ptr1 = &a;
	int* ptr2 = &num;

	printf("%c\n", a);
	printf("%d\n", num);

	printf("%x\n", ptr1);
	printf("%x\n", ptr2);

	printf("%c\n", *ptr1);
	printf("%d\n", *ptr2);

	char* c1, c2;
	printf("%d\n", sizeof(c1));
	printf("%d\n", sizeof(c2));


	return 0;
}