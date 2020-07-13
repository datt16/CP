#include "bits/stdc++.h"
using namespace std;

int main()
{
    int n[4];
    for (int i = 0; i < 4; i++)
    {
        cin >> n[i];
    }

    if (n[0] < n[1] && n[2] > n[3])
    {
        cout << "YES\n";
    }
    else
    {
        cout << "No\n";
    }
    return 0;
}