
//Exersice of unit 4
#include <iostream>
using namespace std;

int main() {
  // /Exercise 1. Highest index of a valid element in an array with five elements
  int array[5];
  cout << "The highest index of a valid element in an array with five elements is: " << 4 << endl;

  // /Exercise 2. Declare and initialize an array of 10 integers
  int intArray[10];
  for(int i = 0; i < 10; i++){
    intArray[i] = i;
  }

  // /Exercise 3. Find sum and average of an array of numbers
  int numbers[5] = {4, 6, 8, 12, 18};
  int sum = 0;
  for(int i = 0; i < 5; i++){
    sum += numbers[i];
  }
  double average = (double)sum / 5;
  cout << "Sum: " << sum << endl;
  cout << "Average: " << average << endl;

  //Exercise 4. Accept three numbers and display them using an array
  int nums[3];
  cout << "Enter three numbers: " << endl;
  for(int i = 0; i < 3; i++){
    cin >> nums[i];
  }
  cout << "The accepted numbers are: ";
  for(int i = 0; i < 3; i++){
    cout << nums[i] << " ";
  }
  cout << endl;

  return 0;
}