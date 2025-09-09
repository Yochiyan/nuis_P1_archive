/*
学籍番号：32025017
名前：加島慈久
ファイル名：演算3‐10
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
	if (n1 == n2 == n3)
	printf ("3つの値が等しいです。\n");
	else if (n1 == n2 || n2 == n3 || n3 == n1)
	printf ("二つの値が等しいです。\n");
	else 
	printf("三つの値は異なります。");
	return 0;
}