#include <iostream>
using namespace std;
int main()
{
    double r, aoc, coc;
    cout << "enter the radius of circle :";
    cin >> r;
    aoc = 3.14 * (r * r);
    coc = 2 * 3.14 * r;
    cout << "Area of circle is :" << aoc << endl;
    cout << "Area of circumfrence :" << coc << endl;
    if (aoc > coc)
    {
        cout << "Area of circle is larger than Area of circumfrence.";
    }
    else
    {
        cout << "Area of circle is not larger than Area of circumfrence.";
    }
    return 0;
}
