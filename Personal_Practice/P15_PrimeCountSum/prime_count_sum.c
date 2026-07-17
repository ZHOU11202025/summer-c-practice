#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//本题要求统计给定整数M和N区间内素数的个数并对它们求和。
//输入在一行中给出2个正整数M和N(1<=M<=N<=500)。
//在一行中顺序输出M和N区间内素数的个数以及它们的和，数字间以空格分隔。
//2，3，5，7，11，13...
int main() {
	int M, N;
	int count = 0;
	int sum = 0;
	scanf("%d %d",&M,&N);
	for (int n = M;n <= N;n++) {
		int isPrime = 1;
		if (n == 2) {
			isPrime = 1;
			count++;
			sum += n;
		}
		else {
			for (int i = 2;i < n;i++) {
				if (n % i == 0) {
					isPrime = 0;
					break;
				}
			}
			if(isPrime){
				sum += n;
				count++;
				}
		}
	}
	
	printf("%d %d",count,sum);
	return 0;
}