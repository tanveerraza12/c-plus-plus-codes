#include <iostream>
using namespace std;
int pow(int a, int b)
{
    if (b==1) return 1;
    return a * pow(a* b/2 * a*b/2);
}
int main()
{
    int a;
    cout << "Enter base: " << endl;
    cin >> a;
     int b;
    cout << "Enter power: " << endl;
    cin >> b;
    cout<<pow(a,b);
}