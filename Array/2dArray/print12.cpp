#include <iostream>
using namespace std;
// print 12 at every cell of array 
int main()
{
    int arr[5][5];
    cout << "This Promgram Print Only 12. "<<endl;
    for (int i=0; i <5; i++)//row output
    {
         for (int j=0; j<5; j++)//col output
    {
        cout<<"12"<<" ";
        
    } 
    cout<<endl; 
    }
}