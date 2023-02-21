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
//обработка

for (int i = 1; i < n; i++)
{
    int temp_1;
    int temp_2;
    if (a_massiv[i - 1] < 0 && a_massiv[i] < 0)
    {
        temp_1 = a_massiv[i-1];
        b_massive.push_back(temp_1);
        temp_2 = a_massiv[i];
        b_massive.push_back(temp_2);

        break;
    }
    else if ((a_massiv[i - 1] > 0 && a_massiv[i] > 0))
    {

        temp_1 = a_massiv[i-1];
        b_massive.push_back(temp_1);
        temp_2 = a_massiv[i];
        b_massive.push_back(temp_2);

        break;

    }
    else
    {
        temp_1 = 0;
        b_massive.push_back(temp_1);
    }

}
//вывод


for (m = 0; m < b_massive.size(); m++ )
{
    int num_min = m; //номер минимального элемента
        for (int i = m; i < b_massive.size(); i++) { //ищем только в еще не упорядоченной части
            if (b_massive[i] < b_massive[num_min]) {
                num_min = i;
            }
        }
        //обмен значений элементов a[j] и a[num_min]
        int temp;
        temp = b_massive[m];
        b_massive[m] = b_massive[num_min];
        b_massive[num_min] = temp;

}


for (int m = 0; m < b_massive.size(); m++)
{
    if (b_massive[m] != 0)
    {
        cout << b_massive[m] << " ";
    }

}

return 0;
}
