//Exercise of unit 2
#include <iostream>
using namespace std;

int main(){
   //Exercise One
   {
  // This program calculates the product of three integers.
  cout << " This program calculates the product of three integers"<<endl;
 int x, y, z, result;//The declaration
 cout << "Enter three integers: ";//The prompt
 cin >> x >> y >> z;// The input
 result = x * y * z;// The Calculation
cout << "The product is " << result << endl;//The output
// return 0; is termination
   }
   //Exercise two
  { 
   int num1, num2, sum, diff, prod;
   float div;
   cout<<"This program calculets the sum ,defference ,product ,division And Also greater than and smaller than numbers "<<endl;
   cout << "Enter two integers: ";
   cin >> num1 >> num2;

   sum = num1 + num2;
   diff = num1 - num2;
   prod = num1 * num2;
   div = (float)num1 / num2;

   cout << "Sum: " << sum << endl;
   cout << "Difference: " << diff << endl;
   cout << "Product: " << prod << endl;
   cout << "Division: " << div << endl;

   if (num1 > num2) {
      cout << num1 << " is greater than " << num2 << endl;
      cout << num2 << " is smaller than " << num1 << endl;
   } else {
      cout << num2 << " is greater than " << num1 << endl;
      cout << num1 << " is smaller than " << num2 << endl;
   }
  }
  //Exersice three
   {

    float radius, circumference;
    const float pi = 3.14159;
    cout<< "The program calculet the circumference of the circle"<<endl;
    cout << "Enter the radius of the circle: ";
    cin >> radius;
    circumference = 2 * pi * radius;
    cout << "The circumference of the circle is: " << circumference << endl;
    
   }
   //Exercise four
   {
   float a, b, c, root1, root2;
  cout <<"The progarm calculete quadratic equation"<<endl;
   cout << "Enter coefficients a, b and c: ";
   cin >> a >> b >> c;

   root1 = (-b + sqrt(b*b - 4*a*c)) / (2*a);
   root2 = (-b - sqrt(b*b - 4*a*c)) / (2*a);

   cout << "Root 1 = " << root1 << endl;
   cout << "Root 2 = " << root2 << endl;
   }
   return 0;
}