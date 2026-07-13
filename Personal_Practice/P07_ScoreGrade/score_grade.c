#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//大于等于90分为A;小于90且大于等于80为B;小于80且大于等于70为C;小于70且大于等于60为D;小于60为E。
int main() {
	int grade;
	scanf("%d",&grade);
	switch (grade / 10) {
	case 10:
	case 9:
		printf("A");
		break;
	case 8:
		printf("B");
		break;
	case 7:
		printf("C");
		break;
	case 6:
		printf("D");
		break;
	default:
		printf("E");
		break;
	}
	return 0;
}