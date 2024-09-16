#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter how many rows you want :";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int k = 1; k <=n - i + 1; k++)
        {
            cout << "  "; /* delete one space for make triangle space */
        }
        for (int j = 1; j <=i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
