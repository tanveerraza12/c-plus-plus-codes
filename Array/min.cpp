#include <iostream>
using namespace std;

int main()
{
    int arr[5] {2,2,786,4,2};
    // int n = sizeof(arr)/4;
    int mn = arr[0];
    for (int i=0; i<=4; i++)
    {
        mn = min(mn,arr[i]);
    }
    cout<<mn<<" ";
}