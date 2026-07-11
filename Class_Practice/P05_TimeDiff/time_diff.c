#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//输入两个时间，每个时间分别输入小时和分钟的值，然后输出两个时间之间的差，也以几小时几分表示
int main() {
	int hour1, minute1;
	int hour2, minute2;
	printf("请分别输入两个时间的小时和分钟：\n");
	scanf("%d %d",&hour1, &minute1);
	scanf("%d %d",&hour2, &minute2);
	int time1 = hour1 * 60 + minute1;
	int time2 = hour2 * 60 + minute2;
	int diff = time2 - time1;
	printf("这两个时间之间的差为：%d小时 %d分钟",(diff / 60),(diff % 60));
	return 0;
}