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
	int a[3];
	cin >> a[0] >> a[1] >> a[2];
	swap(a[0], a[1]);
	swap(a[0], a[2]);
	cout << a[0] << " " << a[1] << " " << a[2] << endl;

	return 0;
}
