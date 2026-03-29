/*
#include <stdio.h>
#include <stdlib.h>

int main(void) {

	char* c[4];
	for (int i = 0; i < 4; i++) {
		c[i] = (char*)malloc(sizeof(char) * 100);
		scanf_s(" %[^\n]", c[i], 100);
	}

	for (int i = 0; i < 4; i++)
	{
		printf("%s\n", c[i]);
	}
	for (int i = 0; i < 4; i++)
	{
		free(c[i]);
	}
}
*/