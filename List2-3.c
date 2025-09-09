/*
学籍番号：32025017
名前：加島慈久
ファイル名：List2-3
作成日：2025/4/21
計算式
*/

#include <stdio.h>

int main(void)
{
	int a, b;
	puts("2つの整数を入力せよ。");
	printf("整数a: ");	scanf("%d", &a);
	printf("整数b: ");	scanf("%d", &b);
	printf("aをbで割ると%dあまり%dです。\n", a / b, a % b);
	return 0;
}
