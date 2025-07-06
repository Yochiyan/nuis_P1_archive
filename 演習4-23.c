/*
学籍番号：32025017
名前：加島慈久
ファイル名：演習4-23
作成日：2025/6/2
計算式
*/
//左上
#include <stdio.h>

int main(void)
{
    int len;
    puts("左上直角二等辺三角形と右上直角二等辺三角形を表示します。");
    printf("短辺：");    scanf("%d", &len);

    for (int i = 0; i < len; i++) {
        for (int j = 0; j < len - i; j++)
            putchar('*');
        putchar('\n');
    }

//右上
	for (int i = 0; i < len; i++) {
        for (int j = 0; j < i; j++)
            putchar(' ');
        for (int j = 0; j < len - i; j++)
            putchar('*');
        putchar('\n');
    }


    return 0;
}
/*//右上
#include <stdio.h>

int main(void)
{
    int len;
    puts("右上直角二等辺三角形を表示します。");
    printf("短辺：");    scanf("%d", &len);

    for (int i = 0; i < len; i++) {
        for (int j = 0; j < i; j++)
            putchar(' ');
        for (int j = 0; j < len - i; j++)
            putchar('*');
        putchar('\n');
    }

    return 0;
}
*/

