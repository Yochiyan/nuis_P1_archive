/*
学籍番号：32025017
名前：加島慈久
ファイル名：演習4－20初期値０バ
作成日：2025/6/2
計算式
*/

#include <stdio.h>

int main(void)
{
	printf("　 | 1  2  3  4  5  6  7  8  9\n---+---------------------------\n");
    for (int i = 0; i <= 8; i++) {
    	printf(" %d |", i+1);
    	
        for (int j = 0; j <= 8; j++)
		printf("%3d", (i+1)*(j+1));
            putchar('\n');
        }
    
   

    return 0;
}
