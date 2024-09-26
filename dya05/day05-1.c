#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Student {
	int snum;
	char name[100];
	int score;
};

int main()
{
	int N;
	struct Student* p;
	scanf_s("%d", &N);

	p = (struct Student*)malloc(N * sizeof(struct Student));


	for (int i = 0; i < N; i++) {
		printf("학번 : ");
		scanf_s("%d", &p[i].snum);
		printf("이름 : ");
		char tmp[100];
		scanf_s("%s", tmp, 100);
		strcpy_s(p[i].name, 100, tmp);
		printf("점수 : ");
		scanf_s("%d", &p[i].score);
	}
	for (int i = 0; i < N; i++) {
		printf("%d %s %d\n", p[i].snum, p[i].name, p[i].score);
	}

	free(p);

	return 0;


}