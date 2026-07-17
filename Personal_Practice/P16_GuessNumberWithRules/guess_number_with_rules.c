#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//令系统随机产生一个100以内的正整数，提示大了("Too big”)，还是小了("Too small”)，相等表示猜到了。
//一次猜出该数，提示“Bingo!”
//如果3次以内猜到该数，提示"Lucky You!”;
//如果超过3次但是在N(>3)次以内(包括第N次)猜到该数，提示"Good Guess!”;
//如果超过N次都没有猜到，则提出"Game Over”，并结束程序。
//如果在到达N次之前,输入一个负数，也提出"Game Over”，并结束程序。
int main() {
	srand(time(0));
	int num = rand() % 100 + 1;
	int N;
	scanf("%d",&N);
	int n = 0;
	int count = 0;
	int guess = 0;
	while (count < N) {
		scanf("%d",&n);
		count++;
		if (n >= 0) {
			if (n > num) {
				printf("Too big\n");
			}
			else if (n < num) {
				printf("Too small\n");
			}
			else {
				if (count == 1) {
					printf("Bingo!\n");
					guess = 1;
					break;
				}
				else if (count <= 3) {
					printf("Lucky You!\n");
					guess = 1;
					break;
				}
				else {
					printf("Good Guess!\n");
					guess = 1;
					break;
				}
			}
		}
		else {
			printf("Game Over\n");
			return 0;
		}
	}
	if (guess != 1) {
		printf("Game Over\n");
	}
	return 0;
}