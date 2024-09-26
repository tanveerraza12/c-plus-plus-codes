#include <iostream>
using namespace std;
// this program add 2 matrix
int main()
{
    int arr1[2][3];
    cout << "enter no for sum" << endl;
    for (int i = 0; i < 2; i++) // row input
    {
        for (int j = 0; j < 3; j++) // col input
        {
            cout << "enter no. :";
            cin >> arr1[i][j];
        }
        cout << endl;
    }
    int arr2[2][3];
    cout << "enter no for 2 array sum" << endl;
    for (int i = 0; i < 2; i++) // row input
    {
        for (int j = 0; j < 3; j++) // col input
        {
            cout << "enter no. :";
            cin >> arr2[i][j];
        }
        cout << endl;
    }
    int sum[2][3];
    for (int i=0; i <2; i++)//row output
    {
         for (int j=0; j<3; j++)//col output
    {
          sum[i][j] = arr1[i][j] + arr2[i][j]; 
         cout << sum[i][j]<<" ";

    }
    cout << endl;
    }
}

