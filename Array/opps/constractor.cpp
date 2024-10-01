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
    cars c1("Lambo", 2, 20000000, "Red");
    cars c2("RR", 4, 16000000,"Black");
    cars c3("Audi SR", 4, 6000000,"Zed_Black");
    cars c4("BMW", 4, 8000000,"Mat_Black");
   

    print(c1);
    print(c2);
    print(c3);
    print(c4);
}