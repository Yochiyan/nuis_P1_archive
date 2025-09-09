/*
学籍番号：32025017
名前：加島慈久
ファイル名：演算3‐8
作成日：2025/4/21
計算式
*/

#include <stdio.h>

int main(void)
{
	
	int n1,n2;
	puts("二つの整数を入力せよ。");
	printf("整数１：");	scanf("%d", &n1);
	printf("整数２：");	scanf("%d", &n2);
	if (n1 > n2)
	printf("それらの差は%dです。\n",n1 - n2);
	else  
	printf("それらの差は%dです。\n",n2 - n1);
	return 0;
}