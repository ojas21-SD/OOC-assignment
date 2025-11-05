#include <iostream>
using namespace std;
#define SIZE 5

class student
{
private:
    char name[30];
    int roll;
    float marks;
public:
    void getdata(void)
    {
        cout << "Enter name: " << endl;
        cin >> name;

        cout << "Enter roll: " << endl;
        cin >> roll;

        cout << "Enter marks: " << endl;
        cin >> marks;
    }

    void print(void)
    {
        cout << "Name: " << name << "\n";
        cout << "Roll No: " << roll << "\n";
        cout << "Marks: " << marks << "\n";
    }
};

int main()
{
    cout << "Name - Ojas desai" << endl;
    cout << "Div  - B" << endl;
    cout << "Roll No - 63" << endl;
    cout << "---------------------------" << endl << endl;
    student s[SIZE];

    for (int i = 0; i < SIZE; i++)
    {
        s[i].getdata();
        s[i].print();
    }
    
    
}

