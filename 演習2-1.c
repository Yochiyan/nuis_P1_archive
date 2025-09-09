/*
学籍番号：32025017
名前：加島慈久
ファイル名：演習2-1
作成日：2025/4/21
計算式
*/

#include <stdio.h>

int main(void)
{
	int x;
	int y;
	puts("二つの整数を入力せよ。\n");
	printf("整数x: ");	scanf("%d", &x);
	printf("整数y: ");	scanf("%d", &y);
	
	printf("xの値はyの%fです。\n", 100 * x / y);
	return 0;
}
