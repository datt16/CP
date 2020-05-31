#include <stdio.h>

int main(void)
{
    char str[] = "abcDEFghi";

    printf("0:");
    for (int j = 0; str[j] != '\0'; j++)
        printf("%c", str[j]);

    printf("\n");

    printf("1:");
    for (int j = 0; str[j] != '\0'; j++)
    {
        if (str[j] <= 90 && str[j] >= 65)
            printf("%c", str[j] + 32);
        else
            printf("%c", str[j]);
    }
    printf("\n");

    printf("2:");
    for (int j = 0; str[j] != '\0'; j++)
    {
        if (str[j] <= 122 && str[j] >= 97)
            printf("%c", str[j] - 32);
        else
            printf("%c", str[j]);
    }
    printf("\n");

    printf("3:");
    for (int j = 0; str[j] != '\0'; j++)
    {
        if (str[j] <= 90 && str[j] >= 65)
            printf("%c", str[j] + 32);
        else if (str[j] <= 122 && str[j] >= 97)
            printf("%c", str[j] - 32);
    }
    printf("\n");

    return 0;
}
