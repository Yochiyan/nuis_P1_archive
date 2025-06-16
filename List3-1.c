/*
学籍番号：32025017
名前：加島慈久
ファイル名：List3-1
作成日：2025/4/21
計算式
*/

#include <stdio.h>

int main(void)
{
	
	int n;
	printf("整数を入力せよ。：");	scanf("%d", &n);
	if (n % 5)
	puts("その数は5で割り切れません。");
	else
	puts("その数は5で割り切れます。");
	return 0;
}