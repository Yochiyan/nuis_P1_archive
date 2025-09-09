/*
学籍番号：32025017
名前：加島慈久
ファイル名：List 4-20
作成日：2025/6/2
計算式
*/

#include <stdio.h>

int main(void)
{
    int len;

    puts("左下直角三角形を表示します。");
    printf("短辺：");    scanf("%d", &len);
    

    for (int i = 1; i <= len; i++) {
        for (int j = 1; j <= i; j++) {
            putchar('*');
        }
        putchar('\n'); // 1行の終わりで改行
    }

    return 0;
}
