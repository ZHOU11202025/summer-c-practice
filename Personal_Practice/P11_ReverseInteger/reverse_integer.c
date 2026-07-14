#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//输入一个正整数，输出逆序的数结尾的0的处理
int main() {
	int num ,n;
	scanf("%d",&num);//1234
	while (num > 0) { 
		n = num % 10;
		printf("%d",n);
		num /= 10;
	}
	printf("\n");
	return 0;
}