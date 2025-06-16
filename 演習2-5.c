/*
学籍番号：32025017
名前：加島慈久
ファイル名：演習2-5
作成日：2025/4/21
計算式
*/

#include <stdio.h>

int main(void)
{
	int a;
	int b;
	puts("二つの整数を入力せよ。\n");
	printf("整数a: ");	scanf("%d", &a);
	printf("整数b: ");	scanf("%d", &b);
	
	printf("aの値はbの%f％です。\n",(double)100 * a  / b);
	return 0;
}
