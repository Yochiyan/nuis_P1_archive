/*
学籍番号：32025017
名前：加島慈久
ファイル名：演算3‐7
作成日：2025/4/21
計算式
*/

#include <stdio.h>

int main(void)
{
	
	int n1,n2,n3,n4;
	puts("3つの整数を入力せよ。");
	printf("整数A：");	scanf("%d", &n1);
	printf("整数B：");	scanf("%d", &n2);
	printf("整数C：");	scanf("%d", &n3);
	printf("整数D：");	scanf("%d", &n4);
	int max = n1; 
	if (n2 > max) max = n2;
	if (n3 > max) max = n3;
	if (n4 > max) max = n4; 
	printf("最大値は%dです。\n", max);
	return 0;
}