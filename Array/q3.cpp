#include <iostream>
using namespace std;

int main()
{
    int sumodd, sumeven;
    int arr[5]{9, 2, 3, 4, 5}; 
    for (int i = 0; i <= 4; i++)
    {
        if (arr[i] % 2 == 0)
        {
            sumodd = arr[i]+= arr[i];
            cout << sumodd<<" ";
        }
        else
        {

            cout <<arr[i]<<" ";
        }
    }
}
// not complete