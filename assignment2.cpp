#include <iostream>
using namespace std;

class complex
{
private:
    int real;
    int imaginary;

public:
    void getdata(void);
    void print(void);
    void operate(complex o1, complex o2);
};

void complex ::getdata(void)
{
    cout << "Enter real part: " << endl;
    cin >> real;

    cout << "Enter imaginary part: " << endl;
    cin >> imaginary;
}

void complex ::print(void)
{
    cout << "Complex number: " << real << " + " << imaginary << "i" << endl;
}

void complex :: operate(complex o1, complex o2)
{
    char ch;

    cout << "Enter operation (+,-): " << endl;
    cin >> ch;

    switch (ch)
    {
    case '+':
        real = o1.real + o2.real;
        imaginary = o1.imaginary + o2.imaginary;
        break;

    case '-':
        real = o1.real - o2.real;
        imaginary = o1.imaginary - o2.imaginary;
        break;

    default:
        cout << "Invalid Input" << endl;
        exit(0);
        break;
    }
}

int main()
{
    cout << "Name - Ojas desai" << endl;
    cout << "Div  - B" << endl;
    cout << "Roll No - 63" << endl;
    cout << "---------------------------" << endl << endl;
    complex o1, o2, o3;

    o1.getdata();
    o1.print();

    o2.getdata();
    o2.print();

    o3.operate(o1, o2);
    o3.print();

    return 0;
}
