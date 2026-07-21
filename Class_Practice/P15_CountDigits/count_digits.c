#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//输入数量不确定的[0,9]范围内的整数，统计每一种数字出现的次数，输入-1表示结束
int main() {
	int num[10] = {0};
	int n = 0;
	while (1) {
		scanf("%d",&n);
		if (n == -1) {
			break;
		}
		if(n >= 0 && n <= 9) {
			num[n]++;
		}
	}
	printf("\n");
	for (int i = 0;i < 10;i++) {
		printf("%d %d\n", i,num[i]);
	}
	return 0;
}