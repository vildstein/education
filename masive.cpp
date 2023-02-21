#include <iostream>
//#include <cmath>
//#include <iomanip>
#include <vector>

using namespace std;

int main()
{

int n;
int m;
cin >> n;

vector <int> a_massiv(n);
vector <int> b_massive;

//чтение

for (int i = 0; i < n; i ++)
{
    cin >> a_massiv[i];
}
//сортировка массива

for (int j = 0; j < n; j++)
{
    int num_min = j;
    for (int i = j; i < n; i++)
    {
        if (a_massiv[i] < a_massiv[num_min])
        {
            num_min = i;
        }
    }
    int temp = a_massiv[j];
    a_massiv[j] = a_massiv[num_min];
    a_massiv[num_min] = temp;

}



for (m = 0; m < a_massiv.size(); m++ )
{
    if (a_massiv[m] > 0)
    {
        int temp_1;
        temp_1 = a_massiv[m];
        b_massive.push_back(temp_1);
    }
}

cout << b_massive[0] << "\n";


return 0;
}
