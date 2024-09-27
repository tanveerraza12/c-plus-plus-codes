#include <iostream>
using namespace std;
int main()
{
    string n;
    cout << "enter a string: ";
    getline(cin, n);
    for (int i=0; i<n.length(); i++)
    if (n[i]%2==0)
    {
        n[i]='a';
    }
    cout << n<<" ";
}