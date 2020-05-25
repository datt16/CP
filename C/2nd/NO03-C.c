#include <stdio.h>

void output(int c, int mode)
{
    switch (mode)
    {
    case 1: // 大文字から小文字
        if (c <= 90 && c >= 65)
            printf("%c", c + 32);
        else
            printf("%c", c);
        break;

    case 2: // 小文字から大文字
        if (c <= 122 && c >= 97)
            printf("%c", c - 32);
        else
            printf("%c", c);
        break;

    case 3:
        if (c <= 90 && c >= 65)
            output(c, 1);
        else if (c <= 122 && c >= 97)
            output(c, 2);
        break;

    default:
        printf("%c", c);
        break;
    }
}

int main(void)
{
    char str[] = "abcDEFghi";
    int mode[] = {0, 1, 2, 3};

    for (int i = 0; i < 4; i++)
    {
        printf("%d: ", mode[i]);
        for (int j = 0; str[j] != '\0'; j++)
        {
            output(str[j], mode[i]);
        }
        printf("\n");
    }
    return 0;
}

/*
:実行結果:
---------------
0: abcDEFghi
1: abcdefghi
2: ABCDEFGHI
3: ABCdefGHI
---------------
*/