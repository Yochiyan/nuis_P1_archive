/*
学籍番号：32025017
名前：加島慈久
ファイル名：演習 4-13
作成日：2025/6/2
計算式
*/

#include <stdio.h>

int main(void)
{
    int n;
    int sum = 0;

    printf("整数値：");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        sum += i;  // sum = sum + i と同じ意味
    }

    printf("1から%dまでの総和は%dです。\n", n, sum);

    return 0;
}
