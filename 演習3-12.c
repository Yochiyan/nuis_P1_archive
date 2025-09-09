/*
学籍番号：32025017
名前：加島慈久
ファイル名：演習3-12
作成日：2025/5/19
*/

#include <stdio.h>

int main(void)
{
	int a;

	printf("整数を入力せよ。：");
	scanf("%d", &a);

	switch (a % 2) {
		case 0:{ puts("その数は偶数です。"); }break;
		case 1:{ puts("その数は奇数です。"); }break;
	}

	return 0;
}
