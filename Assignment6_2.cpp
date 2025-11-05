#include <iostream>
using namespace std;

// Base class
class Vehicle 
{
public:
    Vehicle() 
    {
        cout << "This is a Vehicle\n";
    }
};

// First subclass
class Car : public Vehicle 
{
public:
    Car() 
    {
        cout << "This Vehicle is Car\n";
    }
};

// Second subclass
class Bus : public Vehicle 
{
public:
    Bus() 
    {
        cout << "This Vehicle is Bus\n";
    }
};

int main() 
{
    cout << "Name - ojas desai" << endl;
    cout << "Div  - B" << endl;
    cout << "Roll No - 63" << endl;
    cout << "---------------------------" << endl << endl;
    // Creating objects of subclasses will also invoke base class constructor
    Car obj1;
    Bus obj2;
    return 0;
}