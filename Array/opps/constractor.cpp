#include <iostream>
using namespace std;
class cars
{
public:
    string name;
    int seats;
    int price;
    string color;

    cars(string n, int s, int p, string c){
        name=n;
        seats=s;
        price=p;
        color=c;
    }
};
void print(cars c)
{
    cout << c.name << " " << c.seats << " " << c.price << " " << c.color << endl;
}
int main()
{
    cars c1("lambo", 2, 20000000, "Red");
    // c1.name = "lambo";
    // c1.seats = 2;
    // c1.price = 2000000";
    // c1.color = "Red";

    cars c2("RR", 4, 1600000,"Black");
    // c2.name = "RR";
    // c2.seats = 4;
    // c2.price = 160000000 ;
    // c2.color = "Black";

    print(c1);
    print(c2);
}