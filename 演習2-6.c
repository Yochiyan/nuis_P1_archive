/*
学籍番号：32025017
名前：加島慈久
ファイル名：演習2-6
作成日：2025/4/21
計算式
*/

#include <stdio.h>

int main(void)
{
	
	int a;
	printf("身長を入力せよ：");	scanf("%d", &a);
	printf("標準体重は%.1fです。\n", (a - 100) * 0.9);
	return 0;
}