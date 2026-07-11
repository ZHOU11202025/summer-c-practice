#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//计算2个正整数的和、差、积、商并输出。题目保证输入和输出全部在整型范围内。
//输入格式:输入在一行中给出2个正整数A和B。
//输出格式:在4行中按照格式"A运算符B=结果”顺序输出和、差、积、商。
int main() {
	int a, b;
	printf("请输入两个正整数：\n");
	scanf("%d %d",&a,&b);
	printf("\n");
	printf("%d + %d = %d\n",a, b, a + b);
	printf("%d - %d = %d\n",a, b, a - b);
	printf("%d * %d = %d\n",a, b, a * b);
	printf("%d / %d = %d\n",a, b, a / b);
	return 0;
}