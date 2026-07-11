#include <iostream>
#include <math.h>
#include <stdlib.h>

using namespace std;

int main(){
	int a, b; cin >> a >> b;
	int res1 = a / b * b;
	cout << res1 << "\n"; // La boi cua b lon nhat nhung khong vuot qua a.
	int res2 = (a + b - 1) / b * b;
	cout << res2 << endl; // La boi cua b nho nhat nhung khong nho hon a.
	return 0;
}
