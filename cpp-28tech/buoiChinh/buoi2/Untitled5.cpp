#include<iostream>
#include<iomanip>
#include<math.h>


using namespace std;

int main(){
	double x; cin >> x;
	cout << fixed << (int)floor(x) << endl; //tron xuong
	cout << fixed << (int)ceil(x) << endl; // tron len
	cout << fixed << (int)round(x) << endl; // dua vao x lam tron len hay tron xuong
	return 0;
}