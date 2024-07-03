#include <iostream>
using namespace std;

int main()
{
    int x, y;
    cout << "Enter the value of x:" << endl;
    cin >> x;
    cout << "Enter the value of y:" << endl;
    cin >> y;
    if (x > 0 && y > 0)
    {
        cout << "Coordinates lies in 1st quadrant" << endl;
    }
    else if (x < 0 && y > 0)
    {
        cout << "Coordinates lies in 2nd quadrant" << endl;
    }
    else if (x < 0 && y < 0)
    {
        cout << "Coordinates lies in 3rd quadrant" << endl;
    }
    else if (x > 0 && y < 0)
    {
        cout << "Coordinates lies in 4th quadrant" << endl;
    }
    else if (x == 0 && (y > 0 || y < 0))
    {
        cout << "Coordinates lies on y-axis" << endl;
    }
    else if (y == 0 && (x > 0 || x < 0))
    {
        cout << "Coordinates lies on x-axis" << endl;
    }
    else
    {
        cout << "Coordinates lies on origin" << endl;
    }

    return 0;
}