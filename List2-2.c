/*
学籍番号：32025017
名前：加島慈久
ファイル名：List2-2
作成日：2025/4/21
計算式
*/

#include <stdio.h>

int main(void)
{
	int no;
	puts("整数を入力せよ。");
	scanf("%d", &no);
	printf("最下位桁は%dです。 \n", no % 10);
	return 0;
}
