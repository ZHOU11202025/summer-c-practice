#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//用于计算两个数之间所用整数的和
int add(int begin, int end) {
	int sum = 0;
	for (int i = begin;i <= end;i++) {
		sum += i;
	}
	return sum;
}
int main() {
	int a, b;
	scanf("%d %d",&a,&b);
	printf("%d\n", add(a, b));
	return 0;
}