/*
学籍番号：32025017
名前：加島慈久
ファイル名：List 4-16
作成日：2025/6/2
計算式
*/

#include <stdio.h>

int main(void)
{
	int n;
	
	printf("整数値：");	scanf("%d", &n);

for(int i = 2; i <= n; i += 2)
	printf("%d ", i);
	putchar('\n');

	return 0;

}
