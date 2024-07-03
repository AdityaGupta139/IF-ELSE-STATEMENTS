#include <iostream>
using namespace std;

int main()
{
    int x, y, z;
    cout << "enter 1st no.:" << endl;
    cin >> x;
    cout << "enter 2nd no.:" << endl;
    cin >> y;
    cout << "enter 3rd no.:" << endl;
    cin >> z;
    if (x > y)
    {
        if (x > z)
        {
            cout << x << " is greatest of them";
        }
        else
        {
            cout << z << " is greatest of them";
        }
    }
    else
    {
        if (y > z)
        {
            cout << y << " is greatest of them";
        }
        else
        {
            cout << z << " is greatest of them";
        }
    }

    return 0;
}