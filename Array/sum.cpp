#include <iostream>
using namespace std;

int main()
{
    int arr[5] {1,4,3,5,5};
    int n = sizeof(arr)/4;
    int sum=0;
    for (int i=0; i<=n; i++)
    {
        sum += arr[i];
    }
    cout<<sum<<" ";
}