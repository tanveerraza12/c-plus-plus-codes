#include <iostream>
using namespace std;

int main()
{
    int arr[5] {2,2,2,2,2};
    // int n = sizeof(arr)/4;
    int pro = 1;
    for (int i=0; i<=4; i++)
    {
        pro = pro*arr[i];
    }
    cout<<pro<<" ";
}