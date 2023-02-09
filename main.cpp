#include <iostream>

using namespace std;


int main()
{
    int null_number   = 0;
    int first_number  = 1;
    int second_number = 1;
    int wrong_number = -1;

    int i = 3;

    int number;

    int fib = 0;



    cin >> number;

 //   0 1 1 2 3 5 8 13 21 34 55     Fibonacci number
 //   0 1 2 3 4 5 6  7  8  9 10     serial number

    if      (number == 0) {i = number; cout << i << endl;}
    else if (number == 1) {i = number; cout << i << endl;}
    else if (number == 2) {i = 3;      cout << i << endl;}
    else if (number == 3) {i = 4;      cout << i << endl;}
    else if (number > 3) {
        while ( fib < number )
        {
            i = i + 1;

            second_number = first_number + second_number;

            first_number = second_number - first_number;

            fib = second_number + first_number;

        }

//        cout << fib << endl;
//        cout << i << endl;

        if (number == fib) {cout << i << endl;}
        else {cout << wrong_number << endl;}

    }


return 0;
}
