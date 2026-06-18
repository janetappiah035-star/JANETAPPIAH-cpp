#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
using namespace std;

// Helper function to get decimal value from binary string
int binaryToDecimal(string binary) {
    int decimal = 0;
    int base = 1;
    for (int i = binary.length() - 1; i >= 0; i--) {
        if (binary[i] == '1') {
            decimal += base;
        }
        base *= 2;
    }
    return decimal;
}

int main() {
    string binary;
    int choice;

    cout << "--- Binary Converter Calculator ---" << endl;
    cout << "Enter a binary number: ";
    cin >> binary;

    cout << "\nChoose Conversion Option:\n";
    cout << "1. Convert to Decimal\n";
    cout << "2. Convert to Hexadecimal\n";
    cout << "3. Convert to Octal\n";
    cout << "Enter choice (1-3): ";
    cin >> choice;

    int decimalValue = binaryToDecimal(binary);

    switch (choice) {
        case 1:
            cout << "Decimal: " << decimalValue << endl;
            break;
        case 2:
            // std::hex prints the integer stream in hexadecimal format
            cout << "Hexadecimal: " << hex << uppercase << decimalValue << endl;
            break;
        case 3:
            // std::oct prints the integer stream in octal format
            cout << "Octal: " << oct << decimalValue << endl;
            break;
        default:
            cout << "Invalid Choice!" << endl;
    }

    return 0;
}