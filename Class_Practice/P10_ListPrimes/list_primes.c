#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//生成一百以内的质数
int main() {
	for (int n = 2;n <= 100;n++) {
		int isPrime = 1;
		if (n == 2) {
			isPrime = 1;
		}
		else {
			for (int i = 2;i < n;i++) {
				if (n % i == 0) {
					isPrime = 0;
					break;
				}
			}
		}
		if (isPrime == 1) {
			printf("%d ",n);
		}
	}
	return 0;
}