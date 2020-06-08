// No.04-C
#include <stdio.h>
void scanf_d(int *a); // プロトタイプ宣言(???を埋める)

int main(void)
{
    int x;
    scanf_d(&x); // ???に適切な指定をして呼び出す
    printf("a=%d\n", x);
    return 0;
}

void scanf_d(int *a)
{
    scanf("%d", a); // a(*a)に入力した数字を代入
}
