#include <stdio.h>

void output(int n){
    if (n<0) {
        printf("%d: Negative (%s)\n", n, (n % 2 == 0) ? "Even" : "Odd");
    }
    else if (n==0) {
        printf("%d: Zero\n", n);
    }
    else{
        printf("%d: Positive (%s)\n", n, (n % 2 == 0) ? "Even" : "Odd");
    }
}

int main() {
    int a = -4, b = 2;
    for (int i = a; i <= b; i++)
    {
        output(i);
    }
    return 0;
}

/*
:実行結果: Windows PowerShell + gcc
----------------------------------
PS> gcc .\NO02-A.c;.\a.exe;
-4: Negative (Even)
-3: Negative (Odd)
-2: Negative (Even)
-1: Negative (Odd)
0: Zero
1: Positive (Odd)
2: Positive (Even)
----------------------------------
*/
