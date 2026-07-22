#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void swap(int *a,int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}
int main() {
	int a = 3;
	int b = 4;
	swap(&a,&b);
	printf("a = %d,b = %d\n", a, b);
	return 0;
}