#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//判断是否是质数,只能被自己和1整除
//2,3,5,7,11(4 6 8 9)
int main() {
	int num;
	int isPrime = 1;
	scanf("%d", &num);
	if (num < 2) {
		isPrime = 0;
	}
	else if (num == 2) {
		isPrime = 1;
	}
	else{
		for (int i = 2;i < num;i++) {
			if (num % i == 0) {
				isPrime = 0;
				break;
			}
		}
	}
	if (isPrime == 1) {
		printf("是质数");
	}
	else {
		printf("不是质数");
	}
	return 0;
}