#include <bits/stdc++.h>

using namespace std;

//nested loop
int main() {


    int n; cin >> n;
    for(int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << "*";
        }
        cout << endl;
    }


    // long long n; cin >> n;
    // int tong = 0;
    // while (n != 0) {
    //     //tach ra chu so cong vao tong
    //     int r = n % 10; // chu so hang don vi
    //     tong += r;
    //     n /= 10;
    // }
    // cout << tong << endl;


    // long long n; cin >> n;
    // int dem = 0;
    // if(n < 0) {
    //     n *= -1;
    // }
    // else if(n == 0){
    //     cout << "1" << endl;
    //     return 0;
    // } else {
    //     while (n != 0) {
    //         dem++;
    //         n /= 10;
    //     }
    //     cout << dem << endl;
    // }


    // int n = 1234;
    // int dem = 0;
    // while (n != 0) {
    //     dem++;
    //     n /= 10;
    // }
    // cout << dem << endl;


    // for(int i = 1; i <= 4; i++) {
    //     for (int j = 1; j <= i; j+=2) {
    //         cout << i << " " << j << endl;
    //     }
    // }
    

    // for (int i = 1; i <= 3; i++) {
    //     cout << "Truoc" << endl;
    //     for (int j = 1; j <= 2; j++) {
    //         cout << i << " " << j << endl;
    //     }
    //     cout << "Sau" << endl;
    // }


    return 0;
}
