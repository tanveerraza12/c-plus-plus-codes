#include <iostream>
using namespace std;
class cars
{
public:
    string name;
    int seats;
    string color;
    
    cars()//default constructor for solo input by own
    {

    }

    cars(string n, int s, int p, string c)//parameter constructor for one line input
    {
        name=n;
        seats=s;
        price=p;
        color=c;
    }
    int p(int prc){
        price=prc;
    }
 private:
    int price;
    

};
void print(cars c)
{
    // cout << c.name << " " << c.seats << " " << c.price<< " " << c.color << endl;
}
int main()
{
    cars c1("Lambo", 2, 20000000, "Red");
    cars c2("RR", 4, 16000000,"Black");
    cars c3("Audi SR", 4, 6000000,"Zed_Black");
    cars c4("BMW", 4, 8000000,"Mat_Black");
   
    cars c5; // by own 
    c2.name = "RR phantom";
    c2.seats = 5;
    c2.p(9000000) ;
    c2.color = "Grey";

    c1.p();
    // print(c1);
    // print(c2);
    // print(c3);
    // print(c4);
}