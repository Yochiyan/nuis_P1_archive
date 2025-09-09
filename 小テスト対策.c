/*
学籍番号：32025017
名前：加島慈久
ファイル名：うるう年
作成日：2025/6/2
計算式
*/

#include <stdio.h>

int main(void)
{
	int yyyy;
	
	puts("うるう年かどうか判断します");
	printf("確かめたい年を西暦で入力：");	scanf("%d", &yyyy);
	puts("==============================");

 if ((yyyy % 4 == 0) &&(yyyy % 100 != 0)||(yyyy % 400 == 0))

	puts("  うるう年です　　");
	else 
	puts("  うるう年じゃありません　　");
	return 0;

}
