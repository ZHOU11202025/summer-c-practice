#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//计算序列2/1+3/2+5/3+8/5+...的前N项之和。
//注意该序列从第2项起，每一项的分子是前一项分子与分母的和，分母是前一项的分子。
//在一行中输出部分和的值，精确到小数点后2位。题目保证计算结果不超过双精度范围。
// N  :1,2,3,4, 5, 6, 7,
//分子:2,3,5,8,13,21,34
//分母:1,2,3,5, 8,13,21
int main() {
	int N;
	double sum = 0;
	double a = 2;
	double b = 1;
	scanf("%d",&N);
	for (int i = 0;i < N;i++) {
		sum += a / b;
		double next_a = a + b;
		double next_b = a;
		a = next_a;
		b = next_b;
	}
	printf("%.2f\n",sum);
	return 0;
}