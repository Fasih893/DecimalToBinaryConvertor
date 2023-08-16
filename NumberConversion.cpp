#include "NumberConversion.h"

int* NumberConversion::DecimalToBinary(int x)
{
    static int binaryNumber[32];
    for (int i = 0; x > 0; i++)
    {
        binaryNumber[i] = x % 2;
        x = x / 2;
    }
    return binaryNumber;
}
