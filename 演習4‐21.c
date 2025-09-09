/*
学籍番号：32025017
名前：加島慈久
ファイル名：演習4－21
作成日：2025/6/2
計算式
*/

#include <stdio.h>

int main(void)
{
    int n;

    printf("正方形を作ります。\n何段ですか？：");
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {          // 行ループ
        for (int j = 0; j < n; j++) {      // 列ループ
            putchar('*');
        }
        putchar('\n'); // 1行分表示したら改行
    }

    return 0;
}

