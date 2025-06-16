/*
学籍番号：32025017
名前：加島慈久
ファイル名：占いswitch文
作成日：2025/5/12
計算式
*/

#include <stdio.h>

int main(void)
{
	
	int n1;//頭に浮かんだ整数
	int n2;//今日の日付
	puts("本日の運勢を占います。");
	puts("頭に浮かんだ100以下の正の整数を入力して！");
	printf("整数：");	scanf("%d", &n1);
	puts("今日の日付を教えて！");
	printf("整数：");	scanf("%d", &n2);
	if (n1 > 0 && n1 <= 100 )
	switch((n1 + n2) % 7 ){
	case 1 : { puts("★ 大吉 ★"); puts("いい一日になりそうだ！");}	break;
	case 2 : { puts("☆ 中吉 ☆");puts("ちょうどいいよね");} break;
	case 3 : { puts("小吉");puts("今日は慎重に過ごしてみよう");} break;
	case 4 : { puts("凶");puts("日頃の行いが返ってきたのかな？");} break;
	case 5 : { puts("☆ 吉 ☆");puts("まぁまぁまぁ...");} break;
	default : { puts("☆ 大凶 ☆");puts("(´･ω･`)");} break;
	
}
/*	if (n1 % 7 ==1)		{ puts("★ 大吉 ★"); puts("いい一日になりそうだ！");}
	 else if (n1 % 7 ==2)	{ puts("☆ 中吉 ☆");puts("ちょうどいいよね");}
	  else if (n1 % 7 ==3)	{ puts("小吉");puts("今日は慎重に過ごしてみよう");}
	   else if (n1 % 7 ==4)	{ puts("凶");puts("日頃の行いが返ってきたのかな？");}
	   else if (n1 % 7 ==5)	{ puts("☆ 吉 ☆");puts("まぁまぁまぁ...");}
	    else 			{ puts("☆ 大凶 ☆");puts("(´･ω･`)");}
*/
else puts("落ち着いて。100以下の正の整数って言ったよ。");

	printf("\n 今日も一日がんばってね～！\n\n");

	return 0;
/* 入力した整数を6で割った余りで結果を出力
あまり１＝大吉
あまり２＝中吉
あまり３＝小吉
あまり４＝凶
その他＝吉
*/
}