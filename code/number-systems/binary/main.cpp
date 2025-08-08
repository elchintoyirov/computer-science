#include <iostream>
#include "converter.h"
using namespace std;

int main()
{
    int choice;

    cout << "Binary & Decimal Converter" << endl;
    cout << "1. Binary to Decimal" << endl;
    cout << "2. Decimal to Binary" << endl;
    cout << "Enter your choice (1/2): ";
    cin >> choice;

    if (choice == 1)
        binaryToDecimal();
    else if (choice == 2)
        decimalToBinary();
    else
        cout << "Invalid choice!" << endl;

    return 0;
}