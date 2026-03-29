/*
#include <stdio.h>

int main(void)
{
	const char city;
	const char* ptr[4];
	for (int i = 0; i < 4; i++)
	{
		scanf("%s", city);
		ptr[i] = city;
	}
	

	return 0;
}
*/


/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	int array[2][3][4];

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			for (int q = 0; q < 4; q++) {
				printf("array[%d][%d][%d] = ", i, j, q);
				scanf("%d", &array[i][j][q]);
			}
		}
	}

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			for (int q = 0; q < 4; q++) {
				printf("array[%d][%d][%d] = %d",i ,j, q, array[i][j][q]);
				printf("\n");
			}
		}
	}
}
*/
/*
#include <stdio.h>

int main(void) {
	char c[3][20];
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			printf("학생 %d의 이름: ", i + 1);
			scanf(%19s, )
			for (int q = 0; q < 20; q++) {
				
			}
		}
	}

}
*/
/*
#include <stdio.h>

int fact(int n) {
	if (n <= 1) {
		return(1);
	}
	else {
		return(n * fact(n - 1));
	}
}

int main(void) {
	int x = 0;
	int result = 0;

	printf("정수를 입력하세요: ");
	scanf_s("%d", x);

	result = fact(x);
	printf("%d의 팩토리얼 값은 %d입니다.", x, result);

	return 0;
}
*/
