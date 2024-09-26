#include <iostream>
using namespace std;

int main()
{
    int arr[2][3] = {{23, 4, 45}, {6, 87, 9}};
    int mx = INT_MIN;
    for (int i = 0; i < 2; i++) // row input
    {
        for (int j = 0; j < 3; j++) // col input
        {
            mx = max(mx, arr[i][j]);
        }
    }
    cout<<mx;
}