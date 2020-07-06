// https://yukicoder.me/problems/no/1057
#include "bits/stdc++.h"
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    if(a==b) 
        cout << a + b - 1 << endl;
    else
        cout << a + b - (abs(a - b)) << endl;
    
    return 0;
}