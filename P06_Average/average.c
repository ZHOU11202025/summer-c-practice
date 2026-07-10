#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//写一个程序，输入两个整数，输出它们的平均值
int main() {
	int a, b;
	printf("请输入两个整数：\n");
	scanf("%d %d",&a, &b);
	double avg = (a + b) / 2.0;
	printf("两个整数的平均值是：%.1f",avg);
	return 0;
}