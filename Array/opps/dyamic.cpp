#include <iostream>
using namespace std;
class cars
{
public:
    string name;
    int seats;
    int price;
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

    void print()
{
    cout <<name << " " <<seats << " " <<price << " " <<color << endl;
}
};

int main()
{
    // dynamic memory allocation in real time
    cars* c1= new cars("Lambo", 2, 20000000, "Red"); 
    cars* c2= new cars("RR", 4, 16000000,"Black");
    cars* c3= new cars("Audi SR", 4, 6000000,"Zed_Black");
    cars* c4= new cars("BMW", 4, 8000000,"Mat_Black");
   
   //object pointer 
    c1->print(); 
    c2->print();
    c3->print();
    c4->print();
 
}