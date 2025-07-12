//Problem-2: With a single integer as the input, generate the following until a = x [series of numbers as shown in below examples]
#include <iostream>
using namespace std;
int main()
{
    int x;
    cout<<"enter the number: "<<endl;
    cin>>x;
    for(int i=0;i<x;i++){
        cout << (2 * i + 1);
        if (i != x - 1) { 
            cout << ", ";
        }
    }
    return 0;
}
