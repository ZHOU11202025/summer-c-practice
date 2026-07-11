#include <stdio.h>

int main(){
	int a = 5;
	int b = 6;
	printf("交换前，a和b的值分别为：%d %d\n", a, b);
	int temp = 0;
	temp = a;
	a = b;
	b = temp;
	printf("交换后，a和b的值分别为：%d %d",a, b);
	return 0;
}