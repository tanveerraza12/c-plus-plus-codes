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
void print(cars c)
{
    cout << c.name << " " << c.seats << " " << c.price << " " << c.color << endl;
}
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

    print(c1);
    print(c2);
}