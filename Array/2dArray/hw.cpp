#include <iostream>
using namespace std;

int main()
{
    int arr[5][3] = {{2, 2, 2}, {3, 3, 3},{2, 2, 2}, {2, 2, 2}, {2, 2, 2}};
    int sum = 0;
    for (int i = 1; i < 4; i++) // row input
    {
        for (int j = 1; j < 2; j++) // col input
        {
           sum += arr[i][j];
        }
    }
    cout<<sum;
}