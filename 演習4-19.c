/*
学籍番号：32025017
名前：加島慈久
ファイル名：List4-17
作成日：2025/6/2
計算式
*/

#include <stdio.h>

int main(void)
{
    int n;
    int count = 0;

    printf("整数値：");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            printf("%d ", i);
            printf("\n");
            count++;
        }
    }

    printf("約数は%d個です。\n", count);

    return 0;
}
