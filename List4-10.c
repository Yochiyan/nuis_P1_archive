/*
学籍番号：32025017
名前：加島慈久
ファイル名：演習4‐11
作成日：2025/6/2
計算式
*/

#include <stdio.h>

int main(void)
{
	int no;
do{
	printf("正の整数を入力せよ：");	scanf("%d", &no);
if (no <= 0)
	puts("\a正でない数を入力しないでください。");
} while (no <= 0);
//noに0以上の数が入っている
printf("%dを逆から読むと", no);
while (no > 0){
	printf("%d", no % 10);
	no /= 10;
}
puts("です。");
	return 0;

}
