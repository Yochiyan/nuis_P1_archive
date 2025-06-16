/*
学籍番号：32025017
名前：加島慈久
ファイル名：List4-3の全体を何度も繰り返せるように変更したプログラム
作成日：2025/4/21
計算式
*/

#include <stdio.h>

int main(void)
{
int loop;//全体の処理
do {	
	int sum = 0;//合計
	int cnt = 0;//整数値の個数
	int retry;
do{
int t;
	printf("整数値を入力せよ。：\n");	scanf("%d",&t);
sum = sum + t;//sumにtを加えた値をsumに代入（sumにtを加える）
cnt = cnt + 1;//cntに1を加えた値をcntに代入（cntに1を加える）
	printf("まだ？<Yes...1/No...0>");	scanf("%d", &retry);
}while (retry == 1);
	printf("合計は%dで平均%.2fはです。\n", sum, (double)sum / cnt);
printf("\n");
printf("終わる？<はい...1/いいえ...0>");	scanf("%d", &loop);
}while (loop == 0);
	return 0;
}