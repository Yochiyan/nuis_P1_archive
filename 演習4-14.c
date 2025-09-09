/*
学籍番号：32025017
名前：加島慈久
ファイル名：演習4‐14
作成日：2025/6/2
計算式
*/

#include <stdio.h>

int main(void)
{
	int no;

printf("nの値：");	scanf("%d", &no);
 for (int i = 1; i <= no; i++) {
         putchar(pattern["%d" % 10]);
    }

putchar('\n');
	
	
	return 0;

}
