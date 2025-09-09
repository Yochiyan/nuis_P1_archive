/*
学籍番号：32025017
名前：加島慈久
ファイル名：配列＜#define命令＞
作成日：2025/6/2
計算式
*/
#include <stdio.h>
#define NUM 10
int main(void)
{
    int a[NUM];//テストの点数
    int n;
    int sum = 0;//合計
for (n=0; n<NUM; n++) {
	printf("%d番の点数；", n+1);	scanf("%d", &a[n]);
sum = sum + a[n];
}
puts("------------------------");
printf("平均点：%d点です。", sum / NUM);
    return 0;
}

