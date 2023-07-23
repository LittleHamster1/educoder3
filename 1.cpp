#include <iostream>
#include "Array.h"
using namespace std;

Array::Array()
{
    size = 0;
}

Array::Array(const Array& rhs)
{
    int i;
    for (i = 0; i < SIZE; i++)
    {
        data[i] = rhs.data[i];
    }
    size = rhs.size;
}

Array::Array(int const a[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        data[i] = a[i];
    }
    size = n;
}

Array::Array(int count, int value)
{
    size = count;
    int i;
    for (i = 0; i < count; ++i)
    {
        data[i] = value;
    }
}