#include <iostream>
#include <iomanip>
#include <math.h>
#include <stdlib.h>

using namespace std;

int main(){
    int a, b, c; cin >> a >> b >> c; // 8 8 8
    if(a > 0 && b > 0 && c > 0 && a + b > c && a + c > b && b + c > a){
        if(a == b && b == c){
            cout << "1" << endl; // 1. Tam giac deu
        } if(a == b || b == c || c == a) {
            cout << "2" << endl; // 2. Tam giac can
        } if((a*a==b*b+c*c) || (b*b==a*a+c*c) || (c*c==a*a+b*b)) {
            cout << "3" << endl; // 3. Tam giac vuong
        } else {
            cout << "4" << endl; // 4. Tam giac thuobg
        }
    } else {
        cout << "INVALID" << endl;
    }
}

