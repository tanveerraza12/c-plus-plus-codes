#include <iostream>
using namespace std;

int main()
{
    int arr[2][3];
    cout << "enter no for 2d array times:"<<endl;
    for (int i=0; i <2; i++)
    {
         for (int j=0; j<3; j++)
    {
        cout<<"enter no. :";
        cin>>arr[i][j];
    }  
    cout<<endl;
    }
    for (int i=0; i <2; i++)
    {
         for (int j=0; j<3; j++)
    {
        cout<<arr[i][j]<<" ";
        
    } 
    cout<<endl; 
    }
   
}