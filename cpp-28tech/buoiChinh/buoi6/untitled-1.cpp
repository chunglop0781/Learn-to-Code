#include <bits/stdc++.h>
using namespace std;

int main() {


    //Giai phương trinh

    int a, b, n; cin >> a >> b >> n;
    for(int x = 0; x <= n / a; x++) {
        int temp = n - a * x;
        if (temp % b == 0) {
            cout << "Yes" << endl;
            cout << x << " " << temp / b << endl;
            return 0;
        }
    }
    cout << "No" << endl;


    //In bang cuu chuong

    // int n; cin >> n;
    // for (int i = 1; i <= n; i++) {
    //     for (int j = 1; j <= 10; j++) {
    //         cout << j << " x " << i << " = " << i * j << endl;
    //     }
    //     cout << endl;
    // }


    //Ve hinh chu cai

    // int n; cin >> n;
    // for (int i = 1; i <= n; i++) {
    //     if(i % 2 == 1) {
    //         int temp = 64 + i;
    //         for (int j = 1; j <= n; j++) {
    //             cout << char(temp);
    //             temp++;
    //         }
    //     }
    //     else{
    //         int temp = 97 + i;
    //         for (int j = 1; j <= n; j++) {
    //             cout << char(temp);
    //             temp++;
    //         }
    //     }
    //     cout << endl;
    // }


    //Ve hinh so 1

    // int n; cin >> n;
    // for (int i = 1; i <= n; i++) {
    //     for (int j = 1; j <= n; j++) {
    //         if ((i + j) % 2 == 1) {
    //             cout << "1";
    //         }
    //         else{
    //             cout << "0";
    //         }
    //     }
    //     cout << endl;
    // }


    //Ve hinh so
    
    // int n; cin >> n;
    // for (int i = 1; i <= n; i++) {
    //     for (int j = 1; j <= n; j++) {
    //         if (j == i || j == n - i + 1) {
    //             cout << i << " ";
    //         }
    //         else{
    //             cout << "  ";
    //         }
    //     }
    //     cout << endl;
    // }


    //Hinh thoi

    // int n; cin >> n;
    // for (int i = 1; i <= n; i++) {
    //     //xay dung nua tren
    //     for (int j = 1; j <= n - i; j++) {  
    //         cout << "  ";
    //     }
    //     for (int j = 1; j <= 2 * i - 1; j++) {
    //         cout << "* ";
    //     }
    //     cout << endl;
    //     //xay dung nua duoi
    //     if (i == n) {
    //         for (int i = n - 1; i >= 1; i--) {
    //             for (int j = 1; j <= n - i; j++) {
    //                 cout << "  ";
    //             }
    //             for (int j = 1; j <= 2 * i - 1; j++) {
    //                 cout << "* ";
    //             }
    //             cout << endl;
    //         }
    //     }
    // }


    //Tam giac so
    
    // int n; cin >> n;
    // for (int i = 1; i <= n; i++) {
    //     //in ra dau cach
    //     for (int j = 1; j <= n - i; j++) {
    //         cout << "  ";
    //     }
    //     //in ra dau sao
    //     int temp = i;
    //     for (int j = 1; j <= 2 * i - 1; j++) {
    //         if (j < i) {
    //             cout << temp << " ";
    //             temp++;
    //         }
    //         else{
    //             cout << temp << " ";
    //             --temp;
    //         }
    //     }
    //     cout << endl;
    // }


    //Tam giac nguoc

    // int n; cin >> n;
    // for (int i = n; i >= 1; i--) {
    //     //in ra dau cach
    //     for (int j = 1; j <= n - i; j++) {
    //         cout << "  ";
    //     }
    //     //in ra dau sao
    //     for (int j = 1; j <= 2 * i - 1; j++) {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }


    //Ve hinh 4

    // int n; cin >> n;
    // for (int i = 1; i <= n; i++) {
    //     for (int j = 1; j <= i; j++) {
    //         cout << char(64 + i) << "";
    //     }
    //     cout << endl;
    // }


    //Ve hinh 3

    // int n; cin >> n;
    // int dem = 1;
    // for (int i = 1; i <= n; i++) {
    //     for (int j = 1; j <= n; j++) {
    //         cout << dem << " ";
    //         dem++;
    //     }
    //     cout << endl;
    // }
    // cout << endl;
    // for (int i = 1; i <= n; i++) {
    //     int dem = i;
    //     for (int j = 1; j <= n; j++) {
    //         cout << dem << " ";
    //         dem++;
    //     }
    //     cout << endl;
    // }
    // cout << endl;
    // for (int i = 1; i <= n; i++) {
    //     for (int j = 1; j <= n; j++) {
    //         if (j <= n - i) {
    //             cout << "~";
    //         }
    //         else{
    //             cout << i;
    //         }
    //     }
    //     cout << endl;
    // }
    // cout << endl;
    // for (int i = 1; i <= n; i++) {
    //     int temp = i, khoangcach = n - 1;
    //     for (int j = 1; j <= i; j++) {
    //         cout << temp << " ";
    //         temp += khoangcach;
    //         --khoangcach;
    //     }
    //     cout << endl;
    // }


    //Ve hinh 2

    // int n; cin >> n;
    // cout << endl;
    // for (int i = 1; i <= n; i++) {
    //     for (int j = 1; j <= i; j++) {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }
    // cout << endl;
    // for (int i = 1; i <= n; i++) {
    //    for (int j = 1; j <= n - i + 1; j++) {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }
    // cout << endl;
    // for (int i = 1; i <= n; i++) {
    //    for (int j = 1; j <= n; j++) {
    //         if (j <= n-i) {
    //             cout << " ";
    //         }
    //         else{
    //             cout << "*";
    //         }
    //     }
    //     cout << endl;
    // }
    // cout << endl;
    // for (int i = 1; i <= n; i++) {
    //    for (int j = 1; j <= n; j++) {
    //         if (j >= i) {
    //             cout << "*";
    //         }
    //         else{
    //             cout << " ";
    //         }
    //     }
    //     cout << endl;
    // }
    // cout << endl;
    // for (int i = 1; i <= n; i++) {
    //    for (int j = 1; j <= i; j++) {
    //         if (i == 1 || i == n || j == 1 || j == i) {
    //             cout << "*";
    //         }
    //         else{
    //             cout << " ";
    //         }
    //     }
    //     cout << endl;
    // }
    // cout << endl;


    //Ve hinh 1

    // int n; cin >> n;
    // for (int i = 1; i <= n; i++) {
    //     for (int j = 1; j <= n; j++) {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }
    // cout << endl;
    // for (int i = 1; i <= n; i++) {
    //     for (int j = 1; j <= n; j++) {
    //         if (i == 1 || i == n || j == 1 || j == n){
    //             cout << "*";
    //         }
    //         else{
    //             cout << " ";
    //         }
    //     }
    //     cout << endl;
    // }
    // cout << endl;
    // for (int i = 1; i <= n; i++) {
    //     for (int j = 1; j <= n; j++) {
    //         if (i == 1 || i == n || j == 1 || j == n){
    //             cout << "*";
    //         }
    //         else{
    //             cout << "#";
    //         }
    //     }
    //     cout << endl;
    // }
    // cout << endl;
    // for (int i = 1; i <= n; i++) {
    //     for (int j = 1; j <= n; j++) {
    //         if (i == 1 || i == n || j == 1 || j == n){
    //             cout << i << " ";
    //         }
    //         else{
    //             cout << "  ";
    //         }
    //     }
    //     cout << endl;
    // }
    // cout << endl;


    //thuong giai thua

    // int n; cin >> n;
    // double res = 1;
    // long long gt = 1;
    // for (int i = 1; i <= n - 1; i++) {
    //     gt *= i;
    //     res += 1.0 / gt;
    // }
    // cout << fixed << setprecision(4) << res << endl;


    //mua bia

    // int n; cin >> n;
    // int ans = n / 28;
    // int vo = n / 28;
    // while (vo >= 3) {
    //     int temp = vo / 3;
    //     ans += temp;
    //     vo = vo % 3 + temp;
    // }
    // cout << ans << endl;


    //digital root

    // long long n;
    // cin >> n;
    // while (n >= 10) {
    //     int sum = 0;
    //     while (n > 0) {
    //         sum += n % 10;
    //         n /= 10;
    //     }
    //     n = sum;
    // }
    // cout << n << endl;


    return 0;
}
