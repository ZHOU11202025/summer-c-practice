#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//程序每次读入一个正3位数，然后输出按位逆序的数字。
//注意:当输入的数字含有结尾的0时，输出不应带有前导的0。比如输入700，输出应该是7。
int main() {
	int num;
	scanf("%d",&num);
	int n1 = num / 100;
	int n2 = (num % 100) / 10;
	int n3 = num % 10;
	num = n3 * 100 + n2 * 10 + n1;
	printf("%d\n", num);
	return 0;
}