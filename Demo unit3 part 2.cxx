
#include <iostream>
using namespace std;

int main()
{
    //switch statement
    int day;
    cout << "Enter a number between 1-7: ";
    cin >> day;
    switch (day)
    {
    case 1:
        cout << "Monday" << endl;
        break;
    case 2:
        cout << "Tuesday" << endl;
        break;
    case 3:
        cout << "Wednesday" << endl;
        break;
    case 4:
        cout << "Thursday" << endl;
        break;
    case 5:
        cout << "Friday" << endl;
        break;
    case 6:
        cout << "Saturday" << endl;
        break;
    case 7:
        cout << "Sunday" << endl;
        break;
    default:
        cout << "Invalid input." << endl;
    }

    //Nested Switch Statement:

    int month, year;
    cout << "Enter a month (1-12): ";
    cin >> month;
    cout << "Enter a year: ";
    cin >> year;
    switch (month)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        cout << "31 days in the month." << endl;
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        cout << "30 days in the month." << endl;
        break;
    case 2:
        if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
        {
            cout << "29 days in the month." << endl;
        }
        else
        {
            cout << "28 days in the month." << endl;
        }
        break;
    default:
        cout << "Invalid input." << endl;

        //Conditional Expression:

        int num1, num2;
        cout << "Enter two numbers: ";
        cin >> num1 >> num2;
        int max = (num1 > num2) ? num1 : num2;
        cout << "The maximum number is: " << max << endl;

        //For Loop:

        for (int i = 0; i <= 10; i++)
        {
            cout << i << " ";
        }
        cout << endl;

        // While Loop:

        int i = 0;
        while (i <= 10)
        {
            cout << i << " ";
            i++;
        }
        cout << endl;

        // Do While:
        {
            int i = 0;
            do
            {
                cout << i << " ";
                i++;
            } while (i <= 10);
            cout << endl;
        }
        // Goto:

        int num;
    start:
        cout << "Enter a positive number: ";
        cin >> num;
        if (num <= 0)
        {
            goto start;
        }
        else
        {
            cout << "The number is positive." << endl;
        }

        //Break:

        for (int i = 0; i <= 10; i++)
        {
            if (i == 5)
            {
                break;
            }
            cout << i << " ";
        }
        cout << endl;

        // Continue:

        for (int i = 0; i <= 10; i++)
        {
            if (i == 5)
            {
                continue;
            }
            cout << i << " ";
        }
        cout << endl;
        return 0;
    }
}