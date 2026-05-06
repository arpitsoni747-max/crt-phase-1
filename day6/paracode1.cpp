#include <iostream>
using namespace std;

class Area
{
public:
    int length, breadth, side, radius;

    // Rectangle Constructor
    Area(int l, int b)
    {
        length = l;
        breadth = b;

        cout << "Area of Rectangle = " << length * breadth << endl;
    }

    // Square Constructor
    Area(int s)
    {
        side = s;

        cout << "Area of Square = " << side * side << endl;
    }

    // Circle Constructor
    Area(float r)
    {
        radius = r;

        cout << "Area of Circle = " << 3.14 * radius * radius << endl;
    }
};

int main()
{
    Area rect(10, 5);
    Area square(4);
    Area circle(3.0f);

    return 0;
}