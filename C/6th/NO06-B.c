// No.06-B
#include <stdio.h>
#include <stdlib.h>
int *intArr(int n);
int main(void)
{
    int n;
    scanf("%d", &n);
    int *arr = intArr(n);
    for (int i = 0; i < n; i++)
        printf("%d\n", arr[i]);
    free(arr);
    return 0;
}
// ここに intArr() 関数を書く
int *intArr(int n)
{
    int *arr;
    arr = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
        arr[i] = i;
    
    return arr;
}