/*
学籍番号：32025017
名前：加島慈久
ファイル名：演習 4-18
作成日：2025/6/2
計算式
*/

#include <stdio.h>

int main(void)
{
    int n;

    printf("何個＊を表示しますか：");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        putchar('*');

        // 5個ごとに改行
        if (i % 5 == 0) {
            putchar('\n');
        }
    }

   

    return 0;
}
