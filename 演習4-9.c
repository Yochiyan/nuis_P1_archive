/*
学籍番号：32025017
名前：加島慈久
ファイル名：演習4‐9
作成日：2025/6/2
計算式
*/

/*#include <stdio.h>

int main(void)
{
	int no;

printf("正の整数：");	scanf("%d", &no);
//if(no-- > 0){
while(no-- >=0){
	putchar('+');
	if(no-- >= 0){
		putchar('-');
		}
	}
	printf("\n");
	return 0;

}*/
#include <stdio.h>

int main(void)
{
    int no;
    printf("正の整数：");
    scanf("%d", &no);

    while (no > 0) {
        putchar('+');
        no--;
        if (no > 0) {
            putchar('-');
            no--;
        }
    }

    printf("\n");
    return 0;
}

