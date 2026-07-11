#include<iostream>
#include<iomanip>
#include<math.h>


using namespace std;

int main(){
	int x, y; cin >> x >> y;
	long long kq = 5 * x + 2 * y + 1ll * x * y;
	cout << kq << endl;
	return 0;
}