#include <stdio.h>

int main()
{
    int a = -10, b = 10;
    for (int i = a; i <= b; i++)
    {  
        if (i < 0)
        {
            if (i%2==0)
                printf("%d: Negative (%s)\n", i, "Even");
            else
                printf("%d: Negative (%s)\n", i, "Odd");
        }
        else if (i == 0)
        {
            printf("%d: Zero\n", i);
        }
        else
        {
            if (i % 2 == 0)
                printf("%d: Positive (%s)\n", i, "Even");
            else
                printf("%d: Positive (%s)\n", i, "Odd");
        }
    }
    return 0;
}
