/*
学籍番号：32025017
名前：加島慈久
ファイル名：星占い
作成日：2025/6/2
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
	int h;//健康
	int count;
	int q;//朝ごはんの質問
/*	int x;//健康運の回答
	int y;//勉強運の回答
	int z;//愛情運の回答*/
	int c;//

	 while (1) {
        printf("まず、朝ごはんをきちんと食べてきましたか？\n食べてきた・9\n食べてこなかった・0\n");
        scanf("%d", &q);
	if (q == 0 || q == 9) {
            break; // 正しい入力ならループを抜ける
        } else {
            puts("０か９を入れてね。\n");
}
}
	printf("\nあなたの運勢を占います。\n占う日と誕生日を入力してください。\n");
	printf("占う日　月：");	scanf("%d", &mm);
	printf("　　　　日：");	scanf("%d", &dd);
	printf("誕生日　月：");	scanf("%d", &bm);
	printf("　　　　日: ");	scanf("%d", &bd);
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
		printf(" ★ ");
		k = k - 1;
	}while(k > 0);
printf("\n");


/*愛情運*/
	//占う日ddと誕生月bmをかけて5で割ったあまり
switch ((dd * bm) % 5 ) {
case 0: i = 5;	break;     //あまり0は星を5つ
case 1: i = 4;	break;    //あまり1は星を4つ
case 2: i = 3;	break;   //あまり2は星を3つ
case 3: i = 2;	break;  //あまり3は星を2つ
case 4: i = 1;	break; //あまり4は星を1つ

}
printf("＜愛情運＞：");
		
while(i > 0) {
	printf(" ★ ");
	--i; 
}
putchar('\n');//printf("\n");

/*健康運*/
	//愛情運で出た数字と誕生日bdをかけて3で割ったあまり
switch ((i * bd) % 3 ) {
case 0: h = 5;	break;     //あまり0は星を5つ
case 1: h = 4;	break;    //あまり1は星を4つ
case 2: h = 3;	break;   //あまり2は星を3つ
case 3: h = 2;	break;  //あまり3は星を2つ
case 4: h = 1;	break; //あまり4は星を1つ

}
printf("～健康運～：");
		
while(h > 0) {
	printf(" ★ ");
	--h; 
}
putchar('\n');

/*勉強運*/
	//朝ごはんと占う日を掛けて誕生月を足して5で割ったあまり
switch ((q * mm + bm) % 5) {
case 0: s = 5;	break;     //あまり0は星を5つ
case 1: s = 4;	break;    //あまり1は星を4つ
case 2: s = 3;	break;   //あまり2は星を3つ
case 3: s = 2;	break;  //あまり3は星を2つ
case 4: s = 1;	break; //あまり4は星を1つ

}
printf("｜勉強運｜：");
		
while(s > 0) {
	printf(" ★ ");
	--s; 
}
putchar('\n');

printf("もう一度？【Yes・・１｜No・・０】");	scanf("%d", &retry);
puts("---------------------------------");
}while(retry == 1);
	return 0;

}
