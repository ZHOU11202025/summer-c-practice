#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int price = 0;
	printf("请输入商品价格（元）：\n");
	scanf("%d", &price);
	int change = 100 - price;
	printf("还剩余：%d元",change);
	return 0;
}