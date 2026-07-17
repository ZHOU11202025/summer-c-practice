#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//给定不超过6的正整数A，考虑从A开始的连续4个数字。请输出所有由它们组成的无重复数字的3位数。
//要求从小到大，每行6个整数。整数间以空格分隔，但行末不能有多余空格
int main() {
	int A;
	int ret;
	int count = 0;
	scanf("%d",&A);
	for (int i = A;i < A + 4;i++) {
		for (int j = A;j < A + 4;j++) {
			for (int k = A;k < A + 4;k++) {
				if (i != j && i != k && j != k) {
					ret = i * 100 + j * 10 + k;
					count++;
					printf("%d", ret);
					if (count == 6) {
						printf("\n");
						count = 0;
					}
					else {
						printf(" ");
					}
				}
			}
		}
	}
	return 0;
}