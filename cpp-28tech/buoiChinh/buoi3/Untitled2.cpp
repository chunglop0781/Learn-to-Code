#include <iostream>
#include <iomanip>
#include <math.h>
#include <stdlib.h>

using namespace std;

int main(){
    int a, b; cin >> a >> b; // 9794 1282
    cout << a + b << endl;
    cout << a - b << endl;
    cout << 1ll * a * b << endl;
    if(b != 0){
        cout << fixed << setprecision(2) << (float) a / b << endl;
    } else {
        cout << "INVALID" << endl;
    }
}

