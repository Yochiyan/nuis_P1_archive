/*
学籍番号：32025017
名前：加島慈久
ファイル名：演習4-17
作成日：2025/4/21
計算式
*/

#include <stdio.h>

int main(void)
{
    int n;

    // 入力
    printf("nの値：");	scanf("%d", &n);

    // 入力チェック（任意）
    if (n <= 0) {
        printf("正の整数を入力してください。\n");
        return 1;
    }



    // 1からnまでの2乗を表示
    for (int i = 1; i <= n; i++) {
        printf("%dの2乗は%d\n", i, i * i);
    }

    return 0;
}

