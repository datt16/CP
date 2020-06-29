// Example 07-05
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
    for (int i = 0; i < argc; i++)
    {
        printf("argv[%d] = %s\n", i, argv[i]);
    }
    printf("%s+%s = %d\n", argv[1], argv[2], atoi(argv[1]) + atoi(argv[2]));

    return 0;
}
