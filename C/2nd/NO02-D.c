#include <stdio.h>

int main()
{
    for (int i = 1; i <= 12; i++)
    {
        switch (i)
        {
        case 1:
            printf("%2d: %s.", i, "Jan");
            break;
        case 2:
            printf("%2d: %s.", i, "Feb");
            break;
        case 3:
            printf("%2d: %s.", i, "Mar");
            break;
        case 4:
            printf("%2d: %s.", i, "Apr");
            break;
        case 5:
            printf("%2d: %s", i, "May");
            break;
        case 6:
            printf("%2d: %s", i, "June");
            break;
        case 7:
            printf("%2d: %s", i, "July");
            break;
        case 8:
            printf("%2d: %s.", i, "Aug");
            break;
        case 9:
            printf("%2d: %s.", i, "Sep");
            break;
        case 10:
            printf("%2d: %s.", i, "Oct");
            break;
        case 11:
            printf("%2d: %s.", i, "Nov");
            break;
        case 12:
            printf("%2d: %s.", i, "Dec");
            break;

        default:
            break;
        }
        printf("\n");
    }
    return 0;
}

/*
:実行結果:
---------------
 1: Jan.
 2: Feb.
 3: Mar.
 4: Apr.
 5: May
 6: June
 7: July
 8: Aug.
 9: Sep.
10: Oct.
11: Nov.
12: Dec.
---------------

*/
