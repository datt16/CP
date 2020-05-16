#include <iostream>
#include <vector>
#include <math.h>
#include <cctype>
#include <algorithm>
#include <sstream>
using namespace std;

const float PI = 3.14;

int main()
{
	float n, m; cin >> n >> m;
	vector<int> a(n);

	int pop = 0;
	float all = 0;;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		all += a[i];
	}

	float base = all * (1.0 / (4.0 * m));

	for (int i = 0; i < n; i++) {
		if (a[i] >= base) { 
			pop++; 
		}
	}

	if (pop >= m) cout << "Yes\n";
	else cout << "No\n";
	
	return 0;
}
