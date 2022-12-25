#include <iostream>
using namespace std;

void Area1(int r)
{
    cout << "Area of the circle is " << 3.14 * r * r << endl;
}
void Area2(int l, int w)
{
    cout << "Area of the rectangle is " << l * w << endl;
}
void Area3(int b, int h)
{
    cout << "Area of the triangle is " << (1 / 2) * b * h << endl;
}

int main()
{
    Area1(6);
    Area2(5, 6);
    Area3(5, 4);
    return 0;
}