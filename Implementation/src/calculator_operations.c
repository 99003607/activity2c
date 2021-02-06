#include <calculator_operations.h>
void basicoperation()
{
    //inside these put your switch case
}
int add(int a1, int a2)
{
    return a1 + a2;
}

int subtract(int b1, int b2)
{
    return b1 - b2;
}

int multiply(int c1, int c2)
{
    return c1 * c2;
}

int divide(int d1, int d2)
{
    if(0 == d2)
        return 0;
    else
        return d1 / d2;
}