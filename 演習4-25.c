/*
学籍番号：32025017
名前：加島慈久
ファイル名：演習4-25
作成日：2025/6/2
計算式
*/
#include <stdio.h>

int main(void)
{
    int len;
    puts("下向きピラミッドを表示します。");
    printf("何段ですか：");    scanf("%d", &len);

    for (int i = 0; i < len; i++) {
        for (int j = 0; j < i; j++)
            putchar(' ');

        for (int j = 0; j < 2 * (len - i) - 1; j++)
            printf("%d",(1 + i) % 10);

        putchar('\n');
    }

    return 0;
}

