/*
学籍番号：32025017
名前：加島慈久
ファイル名：List3-6
作成日：2025/4/21
計算式
*/

#include <stdio.h>

int main(void)
{
	
	int n1,n2;
	puts("二つの整数を入力せよ。：");
	printf("整数1：");	scanf("%d", &n1);
	printf("整数2：");	scanf("%d", &n2);
	if (n1 == n2)
	puts("それらの値は同じです。");
	else
	puts("それらの値は違います。");
	return 0;
}