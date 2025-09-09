/*
学籍番号：32025017
名前：加島慈久
ファイル名：演習３－３
作成日：2025/4/21
計算式
*/

#include <stdio.h>

int main(void)
{
	
	int no;
	printf("整数を入力せよ。：");
	scanf("%d" , &no);
	if (no == 0)
	puts("その数は0です。");
	else if (no > 0)//正の数
	printf("絶対値は%dです。\n", no);
	else if (no < 0)//負の数
	printf("絶対値は%dです。\n",-no );

	return 0;
}