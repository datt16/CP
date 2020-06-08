// No.04-B
#include <stdio.h>
void my_swap(int *a, int *b); // プロトタイプ宣言(???を埋める)

int main(void)
{
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);
    printf("a=%d, b=%d\n", a, b); // 入れ替え前
    my_swap(&a, &b);              // ???に適切な指定をして呼び出す
    printf("a=%d, b=%d\n", a, b); // 入れ替え後
    return 0;
}

void my_swap(int *a, int *b)
{
    int a_copy = *a; // a_copyにaのアドレスを保管
    *a = *b;         // aのアドレスをbのアドレスで書き換え
    *b = a_copy;     // bのアドレスに保存したaのアドレスで書き換え
}
