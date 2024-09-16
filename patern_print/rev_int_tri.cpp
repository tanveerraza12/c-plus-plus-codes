#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter how many rows you want :";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <=i; j++) /* "j <=n-i+1;"  for down side triangle*/
        {
            cout <<n-j+1<<" "; /* * print for star patern*/
          
        }
          cout << endl;
    }
}
