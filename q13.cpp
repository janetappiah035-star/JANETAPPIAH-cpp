#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter value for A: ";
    cin >> a;
    cout << "Enter value for B: ";
    cin >> b;

    cout << "Before swap: A = " << a << ", B = " << b << endl;

    // XOR swap algorithm
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    cout << "After swap: A = " << a << ", B = " << b << endl;
    return 0;
}