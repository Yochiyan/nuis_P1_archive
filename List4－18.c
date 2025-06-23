/*
学籍番号：32025017
名前：加島慈久
ファイル名：List 4-18
作成日：2025/6/2
計算式
*/

#include <stdio.h>

int main(void)
{

    for (int i = 1; i <= 9; i++) {
        for (int j = 1; j <= 9; j++)
		printf("%3d", i * j);
            putchar('\n');
        }
    
   

    return 0;
}
