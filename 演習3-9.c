/*
学籍番号：32025017
名前：加島慈久
ファイル名：演算3‐9
作成日：2025/4/21
計算式
*/

#include <stdio.h>

int main(void)
{
	
	int n1,n2,n3;
	puts("3つの整数を入力せよ。");
	printf("整数A：");	scanf("%d", &n1);
	printf("整数B：");	scanf("%d", &n2);
	printf("整数C：");	scanf("%d", &n3);
	int min = n1;
	min = (n2 < min) ? n2 : min;
	min = (n3 < min) ? n3 : min;
	printf("最小値は%dです。\n", min);
	return 0;
}