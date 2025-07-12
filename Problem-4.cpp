//Problem-4: Get the total count of number listed in the dictionary which is multiple of [1,2,3,4,5,6,7,8,9]
#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    int input[n]; 

    cout << "Enter " << n << " numbers: ";
    for (int i = 0; i < n; i++) {
        cin >> input[i];
    }

    int count[10] = {0}; 

    for (int i = 0; i < n; i++) {
        int a = input[i];

        if (a % 1 == 0) count[1]++;
        if (a % 2 == 0) count[2]++;
        if (a % 3 == 0) count[3]++;
        if (a % 4 == 0) count[4]++;
        if (a % 5 == 0) count[5]++;
        if (a % 6 == 0) count[6]++;
        if (a % 7 == 0) count[7]++;
        if (a % 8 == 0) count[8]++;
        if (a % 9 == 0) count[9]++;
    }


    cout << "Count of numbers divisible by 1 to 9:\n";
    for (int i = 1; i <= 9; i++) {
        cout << i << ": " << count[i] << endl;
    }

    return 0;
}
