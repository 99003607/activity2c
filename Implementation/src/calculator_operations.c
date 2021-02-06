#include <calculator_operations.h>

int basic()
{
int add(int a1, int a2)
{
    return a1 + a2;
}

int subtract(int a1, int a2)
{
    return a1 - a2;
}

int multiply(int a1, int a2)
{
    return a1 * a2;
}

int divide(int a1, int a2)
{
    if(0 == a2)
        return 0;
    else
        return a1 / a2;
}
}