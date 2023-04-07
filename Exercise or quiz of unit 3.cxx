// Program to calculate sum of numbers from 1 to 100

#include<iostream>
using namespace std;

int main()
{
    int sum = 0;

    for(int i=1; i<=100; i++)
    {
        sum += i;
    }

    cout<<"Sum of numbers from 1 to 100 is: "<<sum<<endl;

}


//Program to display numbers between 0-100 that are divisible by 2, 3, and 5


{
    cout<<"Numbers divisible by 2, 3 and 5 are: "<<endl;

    for(int i=0; i<=100; i++)
    {
        if(i%2==0 && i%3==0 && i%5==0)
        {
            cout<<i<<" ";
        }
    } 
}
//Program to calculate factorial using for loop, while loop and do-while loop

{
    int num, fact = 1;
    cout<<"Enter a number to calculate its factorial: ";
    cin>>num;

    // Using for loop
    for(int i=1; i<=num; i++)
    {
        fact *= i;
    }
    cout<<"Factorial using for loop: "<<fact<<endl;

    // Using while loop
    fact = 1;
    int i=1;
    while(i<=num)
    {
        fact *= i;
        i++;
    }
    cout<<"Factorial using while loop: "<<fact<<endl;

    // Using do-while loop
    fact = 1;
    i = 1;
    do
    {
        fact *= i;
        i++;
    }while(i<=num);
    cout<<"Factorial using do-while loop: "<<fact<<endl;

    
}


//Program to print the average of numbers from 1 to 10 using while loop
{
    int sum = 0;
    int i = 1;

    while(i<=10)
    {
        sum += i;
        i++;
    }

    float avg = (float)sum/10;

    cout<<"Average of numbers from 1 to 10 is: "<<avg<<endl;

    return 0;
}
