#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//输入一个非负整数，正序输出它的每一位数字
int main() {
	int num;
	scanf("%d",&num);
	int n = num;
	int temp = 1;
	while (n >= 10) {
		n /= 10;
		temp *= 10;
	}
	while (temp > 0) {
		printf("%d ",num / temp);
		num %= temp;
		temp /= 10;
	}
	return 0;
}