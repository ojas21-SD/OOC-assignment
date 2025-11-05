#include <iostream>
using namespace std;

class construct
{
public:
    float area;

    construct()  { area = 0;}
    construct(int a, int b)  { area = a * b;}

    void display()  { cout << area << endl;}
};

int main()
{   
    cout << "Name -ojas desai" << endl;
    cout << "Div  - B" << endl;
    cout << "Roll No - 63" << endl;
    cout << "---------------------------" << endl << endl;
    construct o;
    construct o2(10,20);

    o.display();
    o2.display();
   return 0;
}