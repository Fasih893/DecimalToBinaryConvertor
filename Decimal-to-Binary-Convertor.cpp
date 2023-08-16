// Decimal-to-Binary-Convertor
#include <iostream>
#include "NumberConversion.h"
using namespace std;
int main()
{
    int x;
    int* y;
    NumberConversion NC;
    cout << "Decimal to Binary Convertor" << endl << endl;
    
    while (true)
    {
        cout << "Enter a Decimal Number: ";
        cin >> x;

        y = NC.DecimalToBinary(x);

        cout << "Binary of " << x << " is: ";
        for (int i = 0; i < 32; i++)
        {
            if ((i % 4) == 0)
            {
                cout << " ";
            }
            cout << y[i];
        }
        cout << endl << endl;
    }
    return 0;
}
