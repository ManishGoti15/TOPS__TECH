#include <iostream>
using namespace std;

class Cal
{
    int a, b;

public:
    void setData(int a, int b)
    {
        this->a = a;
        this->b = b;
    }
    void Addition()
    {
        cout << "Addition of " << a << " and " << b << " is " << a + b << endl;
    }
    void Subtraction()
    {
        cout << "Subtraction of " << a << " and " << b << " is " << a - b << endl;
    }
    void Multiplication();
    void Division();
};

void Cal::Multiplication()
{
    cout << "Multiplication of " << a << " and " << b << " is " << a * b << endl;
}
void Cal::Division()
{
    cout << "Division of " << a << " and " << b << " is " << a / b << endl;
}

int main()
{
    Cal c1, c2, c3, c4;

    c1.setData(4, 5);
    c1.Addition();
    c2.setData(67, 43);
    c2.Subtraction();
    c3.setData(41, 5);
    c3.Multiplication();
    c4.setData(81, 9);
    c4.Division();
    return 0;
}