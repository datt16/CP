#include <stdio.h>
int main(void)
{
    char x = 3;
    char *p = &x; // 参照型
    printf("x = %d, *p = %d\n", x, *p);
    printf("&x = %p, p = %p\n", &x, p);
    printf("&p = %p\n", &p);
    return 0;
}