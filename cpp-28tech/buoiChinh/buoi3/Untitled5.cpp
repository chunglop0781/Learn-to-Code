#include <iostream>
#include <iomanip>
#include <math.h>
#include <stdlib.h>

using namespace std;

int main(){
    int ngay; cin >> ngay;
    int nam = ngay / 365;
    ngay = ngay % 365;
    int tuan = ngay / 7;
    ngay = ngay % 7;
    cout << nam << ' ' << tuan << ' ' << ngay << endl;
}

