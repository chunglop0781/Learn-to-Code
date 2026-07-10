#include<iostream>
#include<iomanip>

using namespace std;

int main(){
	double a1 = 129312.318238;
	double b1 = 1293.1293192399;
	cout << fixed << setprecision(3) << a1 << endl << fixed << setprecision(3) << b1 << endl;
	int x, y, z;
	cin >> x >> y >> z;
	cout << z << ", " << y << ", " << x <<endl;
	return 0;
}