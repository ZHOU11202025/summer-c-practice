#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//读入一个3X3的矩阵，矩阵中的数字为1表示该位置上有一个X，为0表示为O
//程序判断这个矩阵中是否有获胜的一方，输出表示获胜一方的字符X或O，或输出无人获胜
int main() {
	int arr[3][3];
	char isWin = ' ';
	{
		for (int i = 0;i < 3;i++) {
			for (int j = 0;j < 3;j++) {
				scanf("%d", &arr[i][j]);
			}
		}
	}
	{
		for (int i = 0;i < 3;i++) {
			if (isWin != ' ')break;
			int j = 1;
			if (arr[i][j - 1] == arr[i][j] && arr[i][j] == arr[i][j + 1]) {
				isWin = (arr[i][j] == 1) ? 'X': 'O';
			}
		}
	}
	{
		for (int j = 0;j < 3;j++) {
			if (isWin != ' ')break;
			int i = 1;
			if (arr[i - 1][j] == arr[i][j] && arr[i][j] == arr[i + 1][j]) {
				isWin = (arr[i][j] == 1) ? 'X' : 'O';
			}
		}
	}
	if (isWin == ' ' && arr[0][0] == arr[1][1] && arr[1][1] == arr[2][2]) {
		isWin = (arr[1][1] == 1) ? 'X' : 'O';
	}
	if (isWin == ' ' && arr[0][2] == arr[1][1] && arr[1][1] == arr[2][0]) {
		isWin = (arr[1][1] == 1) ? 'X' : 'O';
	}
	if (isWin != ' ') {
		printf("有获胜的一方，获胜字符为%c\n", isWin);
	}
	else {
		printf("没有获胜的一方\n");
	}
	return 0;
}
