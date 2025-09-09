/*
学籍番号：32025017
名前：加島慈久
ファイル名：演習1‐5
作成日：2025/4/14
計算式
*/

#include <stdio.h>

int main(void)
{
	int no;

	printf("整数を入力してください: ");
	scanf("%d", &no);

	printf("%dに13を加えると%dです。\n",no, 13 + no);
	return 0;
}
