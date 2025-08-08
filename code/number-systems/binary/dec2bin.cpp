#include <iostream>
#include "converter.h"
using namespace std;

void decimalToBinary()
{
    int num = 0;
    int rem = 0;
    int count = 0;
    int bin[32];

    cout << "\nConverter: Decimal -> Binary " << endl;
    cout << "\nEnter a decimal number: ";
    cin >> num;

    while (num > 0)
    {
        rem = num % 2;
        num = num / 2;
        bin[count] = rem;
        count++;
    }

    cout << "\nAnswer: ";
    for (int i = count - 1; i >= 0; i--)
    {
        cout << bin[i];
    }

    cout << endl;
}
