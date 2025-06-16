/*
学籍番号：32025017
名前：加島慈久
ファイル名：演算3‐11
作成日：2025/4/21
計算式
*/

#include <stdio.h>

int main(void)
{
	
	int n1,n2;
	puts("2つの整数を入力せよ。");
	printf("整数A：");	scanf("%d", &n1);
	printf("整数B：");	scanf("%d", &n2);
	if ((n1 - n2 <= 10) && (n1 - n2 >= -10))
	printf("それらの差は10以下です。\n");
	else
	printf("それらの差は11以上です。\n");
	return 0;
}