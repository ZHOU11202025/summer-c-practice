#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//对任意给定的1位正整数N，输出从1*1到N*N的部分口诀表。
int main() {
	int N;
	scanf("%d",&N);
	for (int j = 1;j <= N;j++) {
		for (int i = 1;i <= j;i++) {
			printf("%d * %d = %d\t", i, j, i * j);
			if (i == j) {
				printf("\n");
			}
		}
	}
	return 0;
}