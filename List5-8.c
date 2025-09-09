/*
学籍番号：32025017
名前：加島慈久
ファイル名:List5-8
作成日：2025/6/2
計算式
*/
#include <stdio.h>

int main(void)
{
    int x[7];

for(int i = 0; i < 7; i++){
	printf("x[%d]：", i);	scanf("%d", &x[i]);
}
for (int i = 0; i < 3; i++) {
	int t		= x[i];
	x[i]		= x[6 - i];
	x[6 - i]	= t;
	}
puts("反転しました。");
	for (int i = 0; i < 7; i++)
	printf("x[%d] = %d\n", i, x[i]); 

    return 0;
}
