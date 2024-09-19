#include <iostream>
using namespace std;

int main()
{
    int arr[5];
    cout << "enter no. 5 times: ";
    for (int i=0; i <=4; i++)
    {
        cin >> arr[i];
    }
    for (int i=0; i<=4; i++)
    {
        cout << arr[i] << " ";
    }
}