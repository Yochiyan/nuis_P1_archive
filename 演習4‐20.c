/*
学籍番号：32025017
名前：加島慈久
ファイル名：演習4－20
作成日：2025/6/2
計算式
*/

#include <stdio.h>

int main(void)
{
	printf("　 | 1  2  3  4  5  6  7  8  9\n---+---------------------------\n");
    for (int i = 1; i <= 9; i++) {
    	printf(" %d |", i);
    	
        for (int j = 1; j <= 9; j++)
		printf("%3d", i * j);
            putchar('\n');
        }
    
   

    return 0;
}
