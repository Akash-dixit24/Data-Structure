// using function in recurson


#include<iostream>
using namespace std;

int sum(int n) {
    if(n == 0) {
        return 0;
    }
    return n + sum(n - 1);
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "The sum of numbers from 1 to " << n << " is: " << sum(n) << endl;
    return 0;
}



