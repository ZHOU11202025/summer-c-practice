#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//现在，你的程序要读入这个错误的十进制数，然后输出正确的十进制数。
//提示:你可以把18转换回0x12，然后再转换回12.
int main() {
	int num;
	scanf("%d",&num);
	int n1 = num % 16;
	int n2 = num / 16;
	num = n2 * 10 + n1;
	printf("%d\n",num);
	return 0;
}