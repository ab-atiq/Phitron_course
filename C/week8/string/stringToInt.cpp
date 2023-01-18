#include <iostream>
#include <string>
#include <sstream> // this will allow you to use stringstream in your program

using namespace std;

int main()
{
    // option 1
    // create a stringstream object, to input/output strings
    stringstream ss;

    // a variable named str, that is of string data type
    string str = "7897";

    // a variable named num, that is of int data type
    int num;

    // extract the string from the str variable (input the string in the stream)
    ss << str;

    // place the converted value to the int variable
    ss >> num;

    // print to the console
    cout << num << endl; // prints the integer value 7

    // option 2
    // a string variable named str
    string str2 = "7";
    // print to the console
    cout << "I am a string " << str2 << endl;

    // convert the string str variable to have an int value
    // place the new value in a new variable that holds int values, named num
    int num2 = stoi(str2);

    // print to the console
    cout << "I am an int " << num2 << endl;
}