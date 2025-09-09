/*
学籍番号：32025017
名前：加島慈久
ファイル名：演習1‐8
作成日：2025/4/14
計算式
*/

#include <stdio.h>

int main(void)
{
	int n1, n2;
	puts("二つの整数を入力してください。");
	printf("整数n1: ");	scanf("%d", &n1);
	printf("整数n2: ");	scanf("%d", &n2);
	printf("それらの積は%dです。\n", n1 * n2);
	return 0;
}
