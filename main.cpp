#include <iostream>
#include <cmath>
using namespace std;


int main()
 {
    double a;

    cin >> a;

    int result_intermediate;
    int result;

    result_intermediate = trunc(a * 10);

    result = result_intermediate % 10;

    cout << result << endl;

 }
