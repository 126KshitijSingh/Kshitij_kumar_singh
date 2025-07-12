//Problem-3: With a single integer as the input, generate the following until a = x [series of numbers as shown in below examples
#include <iostream>
using namespace std;

int main() {
    int a;
    cout << "Enter a number: ";
    cin >> a;

    int limit = (a % 2 == 0) ? a - 1 : a;  

    for (int i = 1; i <= limit; i += 2) {
        cout << i;
        if (i + 2 <= limit) {
            cout << ", ";
        }
    }

    cout << endl;
    return 0;
}
