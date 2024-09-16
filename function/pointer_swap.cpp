#include<iostream>
using namespace std;
void swap( int* x, int* y){
    int temp = *x;
    *x = *y;
    *y= temp;

}
int main (){
    int x, y;
    cout<<"enter your 1 number :"<<endl;
    cin>>x;
    cout<<"enter your 2 number :"<<endl;
    cin>>y;
    cout<<x<<" "<<y<<endl;
    swap(&x,&y);
    cout<<x<<" "<<y<<endl;
}

