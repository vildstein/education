#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
 {
    int P;
    int X;
    int Y;
    int rouble_cents;
    double percent;
    double vklad;
    int K;
    int i = 0;

    cin >> P;
    cin >> X;
    cin >> Y;
    cin >> K;

    rouble_cents = X * 100 + Y;
    percent = (double) P / 100;


    while ( i < K )
    {

        vklad = rouble_cents + rouble_cents * percent;

        rouble_cents = vklad;

        i = i + 1;
    }

    cout << "vklad = " << vklad << endl;

    int vklad_rub = trunc(vklad) / 100;
    int vklad_cents = trunc(vklad);

//    cout << rouble_cents << endl;
//    cout << "persent = " << percent << endl;
//    cout << vklad << endl;

    cout << vklad_rub << " " << vklad_cents % 100 << endl;

 }
