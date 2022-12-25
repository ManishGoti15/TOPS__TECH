#include <iostream>
using namespace std;

class Cal
{
    int a, b;

public:
    Cal(int a, int b)
    {
        this->a = a;
        this->b = b;
    }
    void Calculator()
    {
        cout << "Addition is " << a + b << endl;
        cout << "Subtraction is " << a - b << endl;
        cout << "Multiplication is " << a * b << endl;
        cout << "Division is " << a / b << endl;
    }
};

int main()
{
    Cal c1 = Cal(75, 53);
    c1.Calculator();
    return 0;
}