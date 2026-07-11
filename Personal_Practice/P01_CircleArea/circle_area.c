#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//写程序计算圆的面积(半径由用户输入)
int main() {
	double r = 0;
	printf("请输入圆的半径：\n");
	scanf("%lf", &r);
	printf("该圆的面积为:%.2f",(3.14 * r * r));
	return 0;
}