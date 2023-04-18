#include <iostream>
#include <string>
using namespace std;
int main()
{
    //String 
    string str = "This is a string of characters.";
    cout << "String: " << str << endl; 
    
    //String of characters 
    char ch[20] = "This is a string"; 
    cout << "String of characters: " << ch <<endl;
    
    //String constant
    const char *cstr = "This is a string constant.";
    cout << "String Constant: " << cstr << endl;
    
    //Reading a String from the Keyboard 
    string input;
    cout << "Enter a string: ";
    cin >> input;
    cout << "You entered: " << input << endl; 
    
    //Some C++ Library Functions for Strings
    string str1 = "Hello World!";
    string str2 = "This is a test.";
    cout << "str1.length(): " << str1.length() << endl; 
    cout << "str2.find('is'): " << str2.find("is") << endl;
    
    //Pointers
    char *pch;
    pch = ch; 
    cout << "Pointer to char array: " << pch << endl;

    //Address in C++
    string *pstr;
    pstr = &str;
    cout << "Address of string: " << pstr << endl;
    
    return 0; 
}
