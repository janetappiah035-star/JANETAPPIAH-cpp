#include <iostream>
using namespace std;

int main() {
    int first, second;
    cout << "Enter two integers: ";
    cin >> first >> second;

    if (first > second) {
        cout << "First value is greater" << endl;
    } else {
        // Note: This matches the prompt's requested behavior, 
        // though it triggers even if they are equal.
        cout << "Second value is greater" << endl;
    }

    return 0;
}