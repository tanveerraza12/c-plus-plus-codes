#include <iostream>
using namespace std;

int main()
{
    int arr[2][3] = {{2, 2, 2}, {2, 2, 2}};
    int pro = 1;
    for (int i = 0; i < 2; i++) // row input
    {
        for (int j = 0; j < 3; j++) // col input
        {
           pro *= arr[i][j];
        }
    }
    cout<<pro;
}