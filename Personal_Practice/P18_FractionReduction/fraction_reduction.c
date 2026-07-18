#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//要求用户输入一个分数，然后将其约分为最简分式,
//当分子大于分母时，不需要表达为整数又分数的形式，即11/8还是11/8;
// 而当分子分母相等时，仍然表达为1 / 1的分数形式。
int main() {
	int a, b;
	int t = 0;
	scanf("%d/%d",&a,&b);
		int m = a;
		int n = b;
		while (n != 0) {
			t = m % n;
			m = n;
			n = t;
		}
		printf("%d/%d\n", a / m,b / m);
	
	return 0;
}