/*
学籍番号：32025017
名前：加島慈久
ファイル名：演習4-22
作成日：2025/6/2
計算式
*/

#include <stdio.h>

int main(void)
{
    int height, width;

    puts("横長の長方形を作ります。");
    printf("一辺（その1）：");    scanf("%d", &width);
    printf("一辺（その2）：");    scanf("%d", &height);

    for (int i = 1; i <= height; i++) {
        for (int j = 1; j <= width; j++) {
            putchar('*');
        }
        putchar('\n'); // 1行の終わりで改行
    }

    return 0;
}
