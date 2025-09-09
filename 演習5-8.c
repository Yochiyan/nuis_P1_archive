/*
学籍番号：32025017
名前：加島慈久
ファイル名：演習5-8
作成日：2025/7/14
計算式
*/

#include <stdio.h>
#define NUMBER 120
int main(void)
{
	int num;
	int tensu[NUMBER];
	int bunpu[11] = {0};
	
printf("人数を入力せよ：");
	do{
		scanf("%d",&num);
	if (num < 1 || num > NUMBER)
		printf("\a1～%dで入力せよ：",NUMBER);
	}while (num < 1 || num > NUMBER);

printf("%d人の点数を入力せよ。\n", num);
	for (int i = 0; i < num; i++){
	printf("%2d番：", i + 1);
	do{
		scanf("%d", &tensu[i]);
		if(tensu[i] < 0 || tensu[i] > 100)
		printf("\a0～100で入力せよ：");
	}while (tensu[i] < 0 || tensu[i] > 100);
bunpu[tensu[i] / 10]++;
}


    // グラフ表示（縦）
    printf("\n");

// 最大値を求める（グラフの高さ）
    int max = 0;
    for (int i = 0; i < 11; i++) {
        if (bunpu[i] > max)
            max = bunpu[i];
    }

    // 一番上（最大値）から下へ
     for (int level = max; level > 0; level--) {
        for (int i = 0; i < 11; i++) {
            if (bunpu[i] >= level)
                printf(" * ");
            else
                printf("   ");
        }
        putchar('\n');
    }

    // 横軸のラベル
    printf("-----------------------------------\n");
 
    printf(" 0 10 20 30 40 50 60 70 80 90 100 \n");

    return 0;
}
