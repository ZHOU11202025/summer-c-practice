#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//程序要读入一个4位以下(含4位)的正整数，然后输出这个整数的位数。
int main() {
	int num;
	int count = 1;
	scanf("%d",&num);
	while (num / 10 > 0) {
		num /= 10;
		count++;
	}
	printf("%d\n",count);
	return 0;
}