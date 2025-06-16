/*
学籍番号：32025017
名前：加島慈久
ファイル名：うらない複雑
作成日：2025/5/26
計算式
*/

#include <stdio.h>

int main(void)
{
	int retry;
do{
	int mm;//占う月
	int dd;//占う日
	int bm;//誕生月
	int bd;//誕生日
	int k;//金運
	int i;//愛情
	int s;//勉強

	printf("\nあなたの運勢を占います。\n占う日と誕生日を入力してください。\n");

	printf("占う日　月：");	scanf("%d", &mm);
	printf("　　　　日：");	scanf("%d", &dd);
	printf("誕生日　月：");	scanf("%d", &bm);
	printf("　　　　日");	scanf("%d", &bd);
	printf("\n");
	printf("\n%d月%d日のあなたの運勢は？\n", mm, dd);

/*-----ｷﾝｳﾝ-----*/

if (mm == bm)
k = 5;//今月誕生月ｻｲｷｮｰﾋｭｰﾏﾝ
	else if (mm + 1 == bm || (mm == 12 && bm == 1))//来月誕生日ﾋｭｰﾏﾝ
	k = 4;
	else if (mm - 1 == bm || (mm == 1 && bm == 12))//先月誕生日ﾋｭｰﾏﾝ
	k = 3;
	else if ((mm - bm) % 2 == 0)//占う月と誕生月の差偶数ﾋｭｰﾏﾝ
	k = 2;
	else  //それ以外の奇跡なﾋｭｰﾏﾝ
	k = 1;
printf("￥金運￥：");
	do{
		printf("★");
		k = k - 1;
	}while(k > 0);
printf("\n");

printf("もう一度？【Yes・・１｜No・・０】");	scanf("%d", &retry);
puts("---------------------------------");
}while(retry == 1);

	return 0;

}
