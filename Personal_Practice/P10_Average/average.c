#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//让用户输入一系列的正整数，最后输入-1表示输入结束，然后程序计算出这些数字的平均数，
//输出输入的数字的个数和平均
int main() {
	int num = 0;
	int count = -1;
	int total = 0;
	while (num != -1) {
		scanf("%d",&num);
		if (num != -1) {
			total += num;
		}
		count++;
	}
	double avg = total / (count * 1.0);
	printf("平均数是%.2f,输入的个数是%d\n",avg ,count);
	return 0;
}