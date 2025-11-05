#include <iostream>
class Rectangle 
{
private:
    double length;
    double width;

public:
    Rectangle() : length(1.0), width(1.0) {}

    Rectangle(double len, double wid) : length(len), width(wid) {}

    ~Rectangle() 
    {
         std::cout << "Rectangle object destroyed." << std::endl;
     }

    double getLength() const
    {
        return length;
    }

    double getWidth() const 
    {
        return width;
    }

    void setLength(double len) 
    {
        length = len;
    }

    void setWidth(double wid) 
    {
        width = wid;
    }

    double calculateArea() const 
    {
        return length * width;
    }

    double calculatePerimeter() const 
    {
        return 2 * (length + width);
    }
};

int main() 
{

    cout << "Name - ojas desai" << endl;
    cout << "Div  - B" << endl;
    cout << "Roll No - 63" << endl;
    cout << "---------------------------" << endl << endl;
    // Rectangle rect;
    Rectangle *rectm = new Rectangle(4.0,40.0);

    std::cout << "Rectangle properties:" << std::endl;
    std::cout << "Length: " << rectm->getLength() << std::endl;

    std::cout << "Width: " << rectm->getWidth() << std::endl;
    std::cout << "Area: " << rectm->calculateArea() << std::endl;
    std::cout << "Perimeter: " << rectm->calculatePerimeter() << std::endl;
    std::cout << "End of code" << std::endl;
    delete rectm;

    return 0;
}