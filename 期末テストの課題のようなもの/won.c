
/*
学籍番号：32025017
名前：加島慈久
ファイル名：woil
作成日：2025/6/2
計算式
*/
#include <stdio.h>

int main(void)
{
    int num1, num2;
    puts("★ ★ 動物が数をかぞえます。★ ★");
    printf("犬くんは３の倍数、猫ちゃんは７の倍数、牛さんは３と７の公倍数で\n「ワン」　　　　　「ニャン」　　　　　「もー」　と数えます\n");
do {
   printf("いくつから：");	scanf("%d", &num1);

if (num1 < 0) {
printf("(正の整数を入力してください。)\n");
    }
}while (num1 < 0);

	printf("いくつまで：");	scanf("%d",&num2);
    return 0;
}

