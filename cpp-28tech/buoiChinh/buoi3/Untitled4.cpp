#include <iostream>
#include <iomanip>
#include <math.h>
#include <stdlib.h>

using namespace std;

int main(){
    int thang, nam; cin >> thang >> nam;
    if(thang >= 1 && thang <= 12 && nam > 0){
        if(thang == 1 || thang == 3 || thang == 5 || thang == 7 || thang == 8 || thang == 10 || thang == 12){
            cout << "31" << endl;
        } else if (thang == 4 || thang == 6 || thang == 9 || thang == 11){
            cout << "30" << endl;
        } else {
            //Nam nhuan la nam
            //1. chia het cho 400
            //2. chia het cho 4 va khong chia het cho 100
            if(nam % 400 == 0 || (nam % 4 == 0 && nam % 100 != 0)){
                cout << "29" << endl;
            } else {
                cout << "28" << endl;
            }
        }
    } else {
        cout << "INVALID" << endl;
    }
}

