#include <iostream>

using namespace std;


int main()
{
    int null_number = 0;
    int first_number = 1;
    int second_number = 1;
    int third_number = 2;

    int i = 4;

    int fib = 0;


    int number;

    cin >> number;

 //   0 1 1 2 3 5 8 13 21 34
    if (number == 0) {cout << null_number << endl;}
    else if (number == 1) {cout << first_number << endl;}
    else if (number == 2) {cout << first_number << endl;}
    else if (number == 3) {cout << third_number << endl;}
    else if (number > 2) {
        while ( i <= number )
        {
            i = i + 1;

            second_number = first_number + second_number;

            first_number = second_number - first_number;

            fib = second_number + first_number;
        }
    cout << fib << "\n";
    }


return 0;
}
