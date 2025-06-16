/*
学籍番号：32025017
名前：加島慈久
ファイル名：演習４－４
作成日：2025/4/21
計算式
*/

#include <stdio.h>

int main(void)
{
	int no;

printf("正の整数を入力せよ。");	scanf("%d", &no);

while (no >= 0)
	printf("%d ", no--);
printf("\n");

return 0;
}