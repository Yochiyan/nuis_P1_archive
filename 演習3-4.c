/*
学籍番号：32025017
名前：加島慈久
ファイル名：演算3‐4
作成日：2025/4/21
計算式
*/

#include <stdio.h>

int main(void)
{
	
	int n1,n2;
	puts("二つの整数を入力せよ。");
	printf("整数A：");	scanf("%d", &n1);
	printf("整数B：");	scanf("%d", &n2);
	if (n1 == n2)
	puts("AとBは等しいです。");
	else if (n1 < n2)
	puts("AはBより小さいです。");
	else if (n1 > n2)
	puts("AはBより大きいです");
	return 0;
}