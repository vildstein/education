#include <iostream>
#include <cmath>
using namespace std;


int main()
 {
    double a;
    double b;
    double c;

    double p;
    double S;

    cin >> a;
    cin >> b;
    cin >> c;

    p = (a + b + c) / 2;

    S = sqrt(p*((p - a) * (p - b) * (p - c)));




    cout << S << endl;

 }
