
/*
学籍番号：32025017
名前：加島慈久
ファイル名：won.c
作成日：2025/7/10
*/
#include <stdio.h>

int main(void)
{
    int num1, num2; //開始数と終了数
    int loop;//全体の処理

    puts("★ ★ 動物が数をかぞえます。★ ★");
    printf("犬くんは３の倍数、猫ちゃんは７の倍数、牛さんは３と７の公倍数で\n「ワン」　　　　　「ニャン」　　　　　「もー」　と数えます\n");
do {
	int cat = 0, dog = 0, cow = 0;//動物が鳴いた回数
    // 入力１：開始数
    do {
        printf("いくつから：");
        scanf("%d", &num1);

        if (num1 < 0) {
            printf("(正の整数を入力してください。)\n");
        }
    } while (num1 < 0);

    // 入力２：終了数
    do {
        printf("いくつまで：");
        scanf("%d", &num2);

        if (num2 < num1) {
            printf("(開始の数より大きい値を入力してください。)\n");
        }
    } while (num2 < num1);

    printf("----------\n");

    // 出力
    for (int i = num1; i <= num2; i++) {
        if (i % 21 == 0) {
            printf("もー");	
           cow++;
        } else if (i % 3 == 0) {
            printf("ワン");
            dog++;
        } else if (i % 7 == 0) {
            printf("ニャン");
            cat++;
        } else {
            printf("%d", i);
        }

        printf("\n");
    }
printf("----- ★おしまい★ -----\n");
printf("犬は%d回、猫は%d回、牛は%d回数えました。\n",dog,cat,cow);
printf("\n");
printf("もういちど？<0:する/9:いいえ>");	scanf("%d", &loop);

}while (loop == 0);

    return 0;
}
