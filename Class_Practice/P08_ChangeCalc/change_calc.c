#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	double price;
	int money;
	printf("请输入购买的金额:\n");
	scanf("%lf",&price);
	printf("请输入支付的票面:\n");
	scanf("%d",&money);
	if (money >= price) {
		double change = money - price;
		printf("找零%.2f\n", change);
	}
	else {
		printf("用户余额不足以购买\n");
	}
	return 0;
}