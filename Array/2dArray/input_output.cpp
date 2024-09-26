#include <iostream>
using namespace std;
//by row 
int main()
{
    int arr[2][3];
    cout << "enter no for 2d array times:"<<endl;
    for (int i=0; i <2; i++)//row input
    {
         for (int j=0; j<3; j++)//col input
    {
        cout<<"enter no. :";
        cin>>arr[i][j];
    }  
    cout<<endl;
    }
    for (int i=0; i <2; i++)//row output
    {
         for (int j=0; j<3; j++)//col output
    {
        cout<<arr[i][j]<<" ";
        
    } 
    cout<<endl; 
    }
   
}