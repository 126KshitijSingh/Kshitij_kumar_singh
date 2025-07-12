//Problem-1: Create a small calculator which performs operations such as Addition, Subtraction, Multiplication and Division using class.
#include <iostream>     
#include <string>   

using namespace std;

int main()
{
    double a, b;
    string ops, ans;

    cout << "First number: ";
    cin >> a;

    cout << "Second number: ";
    cin >> b;

    cout << "Choose operator '+', '-', '*', '/': ";
    cin >> ops;

    if (ops == "+") {
        ans = to_string(a + b);
    } else if (ops == "-") {
        ans = to_string(a - b);
    } else if (ops == "*") {
        ans = to_string(a * b);
    } else if (ops == "/") {
        if (b != 0) {
            ans = to_string(a / b);
        } else {
            ans = "Error: Division by zero!";
        }
    } else {
        ans = "Invalid operation!";
    }

    cout << "Result: " << ans << endl;

    return 0;
}
