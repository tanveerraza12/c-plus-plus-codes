#include <iostream>
using namespace std;

int main()
{
    int count=0;
    int arr[6]{1, 20, 33, 4, 15, 9};
    int x = 4;
    for (int i = 0; i <= 6; i++)
    {
        if (arr[i] > x)
        {
            count++;
            cout <<arr[i]<< " ";
            // cout <<arr[i]<< " ";
        }
    }
            cout<<"Total Found:"<<count;

}