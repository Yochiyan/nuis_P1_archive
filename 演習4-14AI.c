/*
学籍番号：32025017
名前：加島慈久
ファイル名：演習4‐14
作成日：2025/6/2
計算式
*/

#include <stdio.h>

int main(void)
{
    int n;
    char pattern[] = "1234567890";

    printf("桁数を入力してください：");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        putchar(pattern[i % 10]);
    }

    putchar('\n');

    return 0;
}
