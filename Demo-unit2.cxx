#include <iostream>

using namespace std;

// This is a comment

int main()
{
    int num1 = 5; // variable declaration and initialization
    int num2 = 10;
    int sum = num1 + num2; // arithmetic operator

    cout << "num1 = " << num1 << endl; // output
    cout << "num2 = " << num2 << endl;
    cout << "sum = " << sum << endl;

    char ch = 'A';         // character data type
    int num = 123;         // integer data type
    float fnum = 3.14;     // floating point data type
    double dnum = 3.14159; // double data type

    const int MAX_NUM = 100; // constant variable

    cout << "ch = " << ch << endl;
    cout << "num = " << num << endl;
    cout << "fnum = " << fnum << endl;
    cout << "dnum = " << dnum << endl;
    cout << "MAX_NUM = " << MAX_NUM << endl;

    int input;
    cout << "Enter a number: "; // input
    cin >> input;

    int result = input * 2; // arithmetic operator

    cout << "Result: " << result << endl;

    int x = 5;
    int y = 10;

    cout << "x + y = " << x + y << endl;                              // arithmetic operator
    cout << "x == y: " << (x == y) << endl;                           // relational operator
    cout << "~x = " << ~x << endl;                                    // bitwise operator
    cout << "(x > y) && (x != y): " << ((x > y) && (x != y)) << endl; // logical operator

    int a = 5;
    int b = ++a; // increment operator

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    int c = 5;
    int d = --c; // decrement operator

    cout << "c = " << c << endl;
    cout << "d = " << d << endl;

    int e = 5 + 10 * 2; // precedence operator

    cout << "e = " << e << endl;

    float f = 3.14;
    int g = f; // implicit type conversion

    cout << "g = " << g << endl;

    int h = 10;
    float i = static_cast<float>(h); // explicit type conversion

    cout << "i = " << i << endl;

    return 0;
}