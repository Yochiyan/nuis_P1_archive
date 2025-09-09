/*
学籍番号：32025017
名前：加島慈久
ファイル名：配列＜挑戦1＞
作成日：2025/6/2
計算式
3科目5人のテストの点数入力と平均
*/
#include <stdio.h>

int main(void)
{
    int a[3][5];
    int n, m;
    int sum[3] = {0, 0, 0}; // 各科目の合計
   

    for (m = 0; m < 3; m++) {
        printf("【%d科目】\n", m + 1);
        for (n = 0; n < 5; n++) {
            printf("%d番の点数：", n + 1);
            scanf("%d", &a[m][n]); 
            sum[m] += a[m][n];
        }
    }

    puts("------------------------");
    for (m = 0; m < 3; m++) {
        printf("%d科目の平均点は%d点です\n", m + 1, sum[m] / 5);
    }

    return 0;
}
