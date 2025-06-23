/*
学籍番号：32025017
名前：加島慈久
ファイル名：演習4-15
作成日：2025/4/21
計算式
*/

#include <stdio.h>

int main(void)
{
    int start, end, step;

    // 範囲の入力
    printf("何cmから：");
    scanf("%d", &start);

    printf("何cmまで：");
    scanf("%d", &end);

    printf("何cmごと：");
    scanf("%d", &step);

    // ヘッダー表示
    //printf("\n身長(cm)  標準体重(kg)\n");
    //printf("----------------------\n");

    // 計算と出力
    for (int height = start; height <= end; height += step) {
        double standard_weight = (height - 100) * 0.9;
        printf("%-10d %.2f\n", height, standard_weight);
    }

    return 0;
}
