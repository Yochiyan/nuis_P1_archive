/*
学籍番号：32025017
名前：加島慈久
ファイル名：演習1‐6
作成日：2025/4/14
計算式
*/

#include <stdio.h>

int main(void)
{
	int no;

	printf("整数を入力してください: ");
	scanf("%d", &no);

	printf("%dに7を加えると%dです。\n",no,  no - 7);
	return 0;
}
