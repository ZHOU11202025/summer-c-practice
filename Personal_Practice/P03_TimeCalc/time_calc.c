#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//读入两个数字，第一个数字以这样的四位数字表示当前时间(比如1106表示11点零6分)，第二个数字表示分钟数，
//计算当前时间经过那么多分钟后是几点，结果也表示为四位数字。
//当小时为个位数时，没有前导的零，即5点30分表示为530。
//注意，第二个数字表示的分钟数可能超过60，也可能是负数。
int main() {
	int t1, t2;
	printf("读入两个数字：\n");
	scanf("%d %d",&t1, &t2);
	int hour = t1 / 100;
	int minute = t1 % 100;
	int t = 60 * hour + minute;
	t += t2;
	hour = t / 60;
	minute = t % 60;
	printf("%d%02d\n",hour, minute);
	return 0;
}