#include <iostream>
using namespace std;

int main()
{
    int odd, even;
    int arr[5]{1, 2, 3, 4, 5};
    for (int i = 0; i <= 4; i++)
    {
        if (arr[i] % 2 == 0)
        {
            odd = arr[i] += 10;
            cout << odd<<" ";
        }
        else
        {
            arr[i] *= 2;
            cout << even<<" ";
        }
    }
}
