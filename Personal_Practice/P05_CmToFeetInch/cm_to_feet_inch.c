#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//如果已知英制长度的英尺foot和英寸inch的值，那么对应的米是(foot+inch/12)*0.3048。
//现在，如果用户输入的是厘米数，那么对应英制长度的英尺和英寸是多少呢?别忘了1英尺等于12英寸。
int main() {
	int cm;
	scanf("%d",&cm);
	double m = cm / 100.0;
	double feet = m / 0.3048;
	int foot = (int)feet;
	int inch = (int)((feet  - foot) * 12);
	printf("%d %d",foot,inch);
	return 0;
}