/*
学籍番号：32025017
名前：加島慈久
ファイル名：演習4-24
作成日：2025/6/2
計算式
*/
#include <stdio.h>

int main(void)
{
    int len;
    puts("ピラミッドを表示します。");
    printf("何段ですか：");    scanf("%d", &len);

    for (int i = 0; i < len; i++) {
        // 左側のスペース
        for (int j = 0; j < len - i - 1; j++)
            putchar(' ');

        // アスタリスク（2*i+1個）
        for (int j = 0; j < (i - 1) * 2 + 1; j++)
            putchar('*');

        putchar('\n'); // 改行
    }

    return 0;
}
