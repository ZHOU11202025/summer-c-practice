#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
//水仙花数是指一个N位正整数(N>=3)，它的每个位上的数字的N次幂之和等于它本身。例如:153=13+53+33。(三次方)
//计算所有N位水仙花数。输入在一行中给出一个正整数N(3<=N<=7)。
//按递增顺序输出所有N位水仙花数，每个数字占一行。
int main() {
	int num;
	int a;
	scanf("%d",&num);
	for (int i = (int)(pow(10, num - 1) + 0.5);i <= (int)(pow(10, num) - 0.5);i++) {
		int ret = 0;
		int n = i;
		while (n > 0) {
			a = n % 10;
			ret += (int)(pow(a, num) + 0.5);
			n /= 10;
		}
		if (i == ret) {
			printf("%d\n",i);
		}
	}
	return 0;
}