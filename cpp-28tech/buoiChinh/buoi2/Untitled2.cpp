#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	int x, y, z, t; // 10 20 30 40
	cin >> x >> y >> z >> t;
	cout << y << "," << z << "," << x << "," << t << endl;
	long long tong = (long long)x + y + z + t;
	long long tich = x - y + (long long)z * t;
	cout << tong << endl;
	cout << tich << endl;
	return 0;
}