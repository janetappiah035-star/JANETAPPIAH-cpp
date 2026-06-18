#include <iostream>
#include <cctype> // Required for isupper()
using namespace std;

int main() {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;

    // Combining conditions using the logical AND (&&) operator as requested
    if (isalpha(ch) && isupper(ch)) {
        cout << "Uppercase letter" << endl;
    } else {
        cout << "Not an uppercase letter" << endl;
    }

    return 0;
}