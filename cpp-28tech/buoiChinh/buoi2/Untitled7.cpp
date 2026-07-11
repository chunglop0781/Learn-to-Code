#include<iostream>
#include<iomanip>
#include<math.h>
#include<algorithm> // algorithm: thuat toan


using namespace std;

int main(){
	int x, y, z, t; cin >> x >> y >> z >> t; // 10 25 15 8
	cout << max(x, y) << endl;
	cout << min(z, y) << endl;
	cout << max({x, y, z}) << endl;
	cout << min({x, y, z, t}) << endl;
	return 0;
}