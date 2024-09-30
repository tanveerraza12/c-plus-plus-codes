#include <iostream>
using namespace std;
class cars
{
public:
    string name;
    int seats;
    string price;
    string color;
};
int main()
{
    cars c1;
    c1.name = "lambo";
    c1.seats = 2;
    c1.price = "2 crore";
    c1.color = "Red";

     cars c2;
    c2.name = "RR";
    c2.seats = 4;
    c2.price = "16 crore";
    c2.color = "Black";

    cout<<c1.name<<" "<<c1.seats<<" "<<c1.price<<" "<< c1.color<<endl;
    cout<<c2.name<<" "<<c2.seats<<" "<<c2.price<<" "<< c2.color<<endl;
}