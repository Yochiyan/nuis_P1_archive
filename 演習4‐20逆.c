/*
学籍番号：32025017
名前：加島慈久
ファイル名：演習4－20逆
作成日：2025/6/2
計算式
*/

#include <stdio.h>

int main(void)
{
	printf("　 |  9  8  7  6  5  4  3  2  1 \n---+---------------------------\n");
    for (int i = 9; i >= 1; i--) {
    	printf(" %d |", i);
    	
        for (int j = 9; j >= 1; j--)
		printf("%3d", i * j);
            putchar('\n');
        }
    
   

    return 0;
}
