#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//用1角、2角和5角的硬币凑出10元以下的金额
int main() {
	int money;
	int one, two, five;
	scanf("%d",&money);
	for (one = 1;one <= 10 * money;one++) {
		for (two = 1; two <= 10 * money / 2;two++) {
			for (five = 1;five <= 10 * money / 5;five++) {
				if (one + two * 2 + five * 5 == money * 10) {
					printf("可以用%d个一角，%d个二角，%d个五角的硬币凑出%d元\n",one,two,five,money);
				}
			}
		}
	}
	return 0;
}