//Demo unit3
#include <iostream>
using namespace std;

int main()
{
    //One-Way If Statement
    int x;
    cout << "Enter a number: ";
    cin >> x;
    if (x > 0)
        cout << "The number is positive" << endl;

    //Two-Way If-Else Statement
    int y;
    cout << "Enter a number: ";
    cin >> y;
    if (y > 0)
        cout << "The number is positive" << endl;
    else
        cout << "The number is negative" << endl;

    //Multi-Way If-Else Statement
    int z;
    cout << "Enter a number: ";
    cin >> z;
    if (z > 0)
        cout << "The number is positive" << endl;
    else if (z < 0)
        cout << "The number is negative" << endl;
    else
        cout << "The number is zero" << endl;

    //Nested If Statement
    int a;
    cout << "Enter a number: ";
    cin >> a;
    if (a == 0)
        cout << "The number is zero" << endl;
    else
    {
        if (a > 0)
            cout << "The number is positive" << endl;
        else
            cout << "The number is negative" << endl;
    }
    return 0;
}