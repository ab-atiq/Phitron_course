#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    // output in c++ language
    cout << "Hello World!\n";
    cout << "Hello World2!" << endl;

    int n;
    cout << "Please, inter a number :";
    // input in c++
    cin >> n;
    cout << "The input number is " << n << endl;

    double a = 15.2584937;
    // fixed point after dot point
    cout << "Floating value " << fixed << setprecision(2) << a << endl;

    // array in string
    char arr[15] = "Atiqur Rahman";
    cout << arr << endl;

    // character 
    char c = 'H';
    cout << c << endl;
    return 0;
}