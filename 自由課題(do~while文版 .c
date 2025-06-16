/*
学籍番号：32025017
名前：加島慈久
ファイル名：自由課題_do~while
作成日：2025/5/19
計算式
*/

#include <stdio.h>

int main(void)
{
	int retry;
do{
	int n1;//学科
	int n2;//性別
	int n3;//お昼ご飯
	int n4;//部活動
	int n5;//機種
	int point = 0;//点数

	printf("\n★私がどんな人か当ててみてください★");

	printf("\n私は何学科の人でしょうか？");
	printf("\n1.国際文化学科 2.経営学科 3.情報システム：\n");	scanf("%d", &n1);
	puts("男性？女性？");
	printf("1.男性 2.女性：\n");	scanf("%d", &n2);
	puts("普段、お昼ご飯を食べているところは？");
	printf("1.コンビニ 2.コンティニュー 3.弥彦：\n");	scanf("%d", &n3);
	puts("中学生の時の部活動は？");
	printf("1.美術部 2.サッカー部 3.吹奏楽部 4.野球部\n");	scanf("%d",&n4);
	puts("高校の時に配布されていた端末の機種は？");
	printf("1.Windows 2.iPad 3.Chromebook；\n");	scanf("%d", &n5);


if (n1 == 3) point += 1;
	if (n2 == 1) point += 1;
	if (n3 == 3) point += 1;
	if (n4 == 3) point += 1;
	if (n5 == 3) point += 1;

	switch(point){
	case 0 : { puts("0問正解"); puts("自分に集中している証！");}	break;
	case 1 : { puts("1問正解"); puts("さすがに分かるわけないね");}	break;
	case 2 : { puts("2問正解");puts("他人のことなど興味ないよね。汗");} break;
	case 3 : { puts("3問正解");puts("いつもこの席にいるな～って思っているかな？");} break;
	case 4 : { puts("4問正解！");puts("もしや、普段から見ている？");} break;
	case 5 : { puts("全問正解！");puts("お目が鋭い！すごいね...");} break;	
	
}
printf("もう一度？【Yes・・１｜No・・０】");	scanf("%d", &retry);
}while(retry == 1);
	return 0;

}
