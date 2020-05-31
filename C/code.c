#include <stdio.h>

int main(void)
{
    int a = -20;
    int b = 20;
    for (a; a <= b; a++)
    {
        if (a < 0 && a % 2 == 0)
        {
            printf("%d: Negative (Even)\n", a);
        }
        else if (a < 0 && !(a % 2 == 0))
        {
            printf("%d: Negative (Odd)\n", a);
        }
        else if (a == 0)
        {
            printf("%d: Zero (Even)\n", a);
        }
        else if (a > 0 && a % 2 == 0)
        {
            printf("%d: Positive (Even)\n", a);
        }
        else if (a > 0 && !(a % 2 == 0))
        {
            printf("%d: Positive (Odd)\n", a);
        }
    }
    return 0;
}