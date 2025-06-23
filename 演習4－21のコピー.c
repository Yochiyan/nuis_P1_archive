/*
学籍番号：32025017
名前：加島慈久
ファイル名：演習 4-21
作成日：2025/6/2
計算式
*/

#include <stdio.h>

int main(void)
{
    int n;

    printf("正方形を作ります。\n");
    printf("何段ですか：");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <=i; j++)
printf("*");
printf("\n");

        // 5個ごとに改行
        if (i % n == 0) {
            putchar('\n');
        }
    }

   

    return 0;
}
