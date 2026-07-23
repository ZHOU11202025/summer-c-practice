#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//1. 从键盘读入一组整数（数量不定，但不超过 100 个），以 - 1 表示输入结束。
//2. 使用一个函数 minmax，通过指针参数返回这组数的最大值和最小值。
//3. 在主函数中输出最大值和最小值。
void minmax(int num[], int length, int *min, int *max) {
	*max = num[0];
	*min = num[0];
	for (int i = 1;i < length;i++) {
		if (num[i] > *max) {
			*max = num[i];
		}
		if (num[i] < *min) {
			*min = num[i];
		}
	}
}
int main() {
	int num[100];
	int length = 0;
	int a;
	int min;
	int max;
	while (1) {
		scanf("%d", &a);
		if (a == -1) break;
		num[length++] = a;
	}
	minmax(num, length, &min, &max);
	printf("最大值是%d,最小值是%d\n",max,min);
	return 0;
}