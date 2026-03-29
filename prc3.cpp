/*
#include <stdio.h>

int main(void) {
	char c[2][3][20];
	char label[3][10] = {"이름", "학과", "학번"};
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			printf("학생 %d의 %s: ", i+1, label[j]);
			scanf_s(" %[^\n]", c[i][j], 20);
		}
		printf("\n");
	}
	printf("\n");
	for (int i = 0; i < 2; i++) {
		printf("학생 %d\n", i + 1);
		for (int j = 0; j < 3; j++){
			printf("    ");
			for (int q = 0; c[i][j][q] != '\0'; q++) {
				printf("%c", c[i][j][q]);
			}
			printf("\n");
		}
		printf("\n");
	}

	return 0;
}
*/