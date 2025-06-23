/*
学籍番号：32025017
名前：加島慈久
ファイル名：List 4-19
作成日：2025/6/2
計算式
*/

#include <stdio.h>

int main(void)
{
    int height, width;

    puts("長方形を表示します。");
    printf("高さ：");    scanf("%d", &height);
    printf("横幅：");    scanf("%d", &width);

    for (int i = 1; i <= height; i++) {
        for (int j = 1; j <= width; j++) {
            putchar('*');
        }
        putchar('\n'); // 1行の終わりで改行
    }

    return 0;
}
