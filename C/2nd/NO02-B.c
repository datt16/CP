#include <stdio.h>

int main(void)
{
    int n[] = {100, 400, 1900, 1980, 1990, 2000, 2010, 2015, 2020, 2300};

    for (int i = 0; i < sizeof(n) / sizeof(n[0]); i++)
    {
        if (n[i] % 100 != 0 && n[i] % 4 == 0)
        {
            printf("%d : %s\n", n[i], "Leap-year");
        }
        else
        {
            if (n[i] % 400 == 0)
            {
                printf("%d : %s\n", n[i], "Leap-year");
            }
            else
            {
                printf("%d : %s\n", n[i], "");
            }
        }
    }
    return 0;
}
/*
:実行結果:
--------------------
100 : 
400 : Leap-year
1900 : 
1980 : Leap-year
1990 : 
2000 : Leap-year
2010 : 
2015 : 
2020 : Leap-year
2300 : 
--------------------
*/