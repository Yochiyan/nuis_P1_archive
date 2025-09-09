/*
学籍番号：32025017
名前：加島慈久
ファイル名：演習４－１
作成日：2025/4/21
計算式
*/

#include <stdio.h>

int main(void)
{
	int loop;
do{
	int no;
	printf("整数を入力せよ。：");
	scanf("%d" , &no);
	if (no == 0)
	puts("その数は0です。");
	else if (no > 0)
	puts("その数は正です。");
	else
	puts("その数は負です。");

printf("もう一度？【Yes・・１｜No・・０】");	scanf("%d", &loop);
}while(loop == 1);
	return 0;
}