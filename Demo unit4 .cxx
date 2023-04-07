//Demo unit 4
#include<iostream>
using namespace std;

int main()
{
    // One Dimensional Array
    int arr1[5]; // Declaration of One Dimensional Array

    arr1[0] = 10; // Initialization of One Dimensional Array
    arr1[1] = 20;
    arr1[2] = 30;
    arr1[3] = 40;
    arr1[4] = 50;

    cout<<"One Dimensional Array:"<<endl;

    for(int i=0; i<5; i++) // Accessing One Dimensional Array Elements
    {
        cout<<arr1[i]<<" ";
    }

    cout<<endl;

    // Two Dimensional Array
    int arr2[3][3]; // Declaration of Two Dimensional Array

    arr2[0][0] = 10; // Initialization of Two Dimensional Array
    arr2[0][1] = 20;
    arr2[0][2] = 30;
    arr2[1][0] = 40;
    arr2[1][1] = 50;
    arr2[1][2] = 60;
    arr2[2][0] = 70;
    arr2[2][1] = 80;
    arr2[2][2] = 90;

    cout<<"Two Dimensional Array:"<<endl;

    for(int i=0; i<3; i++) // Accessing Two Dimensional Array Elements
    {
        for(int j=0; j<3; j++)
        {
            cout<<arr2[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}