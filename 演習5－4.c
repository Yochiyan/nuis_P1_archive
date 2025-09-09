/*
学籍番号：32025017
名前：加島慈久
ファイル名:演習5－4
作成日：2025/6/2
計算式
*/
#include <stdio.h>
#define NUM 7
int main(void)
{
    int x[NUM];

for(int i = 0; i < NUM; i++){
	printf("x[%d]：", i);	scanf("%d", &x[i]);
}
for (int i = 0; i < NUM / 2; i++) {
	int t		= x[i];
	x[i]		= x[NUM - 1 - i];
	x[NUM - 1 - i]	= t;
	}
puts("反転しました。");
	for (int i = 0; i < NUM; i++)
	printf("x[%d] = %d\n", i, x[i]); 

    return 0;
}
