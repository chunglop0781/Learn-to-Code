#include<iostream>
#include<iomanip>
#include<math.h>
#include<algorithm> // algorithm: thuat toan


using namespace std;

//10<20 => bool: true - 1 - dung, false - 0 - sai

int main(){
	int n = 70;
	bool kq = (n >= 20) || (n > 100) || (n > 10) ; // 1 || 0 || 1 = 1
	cout << kq << endl;
	return 0;
}