#include <iostream>
#include "converter.h"
using namespace std;

void binaryToDecimal()
{
    int num = 0;
    int dec = 0;
    int digs[32];
    int count = 0;

    cout << "\nConverter: Binary -> Decimal " << endl;
    cout << "\nEnter a binary number: ";
    cin >> num;

    while (num > 0)
    {
        digs[count] = num % 10;
        num = num / 10;
        count++;
    }

    int powerOfTwo = 1;
    for (int i = 0; i < count; i++)
    {
        dec += digs[i] * powerOfTwo;
        powerOfTwo *= 2;
    }

    cout << "Answer: " << dec << endl;
}