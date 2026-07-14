#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>
#include<time.h>
//让计算机来想一个数，然后让用户来猜，
//用户每输入一个数，就告诉它是大了还是小了，直到用户猜中为止，
//最后还要告诉用户它猜了多少次。
int main() {
	srand(time(0));
	int num = rand() % 100 + 1;
	int count = 0;
	int guess;
	printf("已随机生成一个1到100的数\n");
	do{
		count++;
		scanf("%d",&guess);
		if (guess > num) {
			printf("猜大了\n");
		}
		else if(guess < num){
			printf("猜小了\n");
		}
	} while (guess != num);
	printf("猜中了，共猜了%d次\n", count);
	return 0;
}