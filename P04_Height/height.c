#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	printf("请输入身高的英尺和英寸：\n");
	int foot = 0;
	int inch = 0;
	scanf("%d %d", &foot, &inch);
	printf("则身高是%f米\n",((foot + inch / 12) * 0.3048));
}