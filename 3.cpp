/***begin***/
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
    size = rhs.getSize();
}

Array::Array(int const a[], int n)
{
    if (n < 0)
        throw std::invalid_argument("Array");
    int i;
    for (i = 0; i < n; i++)
    {
        data[i] = a[i];
    }
    size = n;
}

Array::Array(int count, int value)
{
    if (count < 0)
        throw std::invalid_argument("Array");
    size = count;
    int i;
    for (i = 0; i < count; i++)
    {
        data[i] = value;
    }
}

void Array::insert(int pos, int value)
{
    if (pos < 0 || pos > size || size == 1000)
    {
        throw std::invalid_argument("insert");
    }
    size++;
    for (int i = size - 1; i >= pos; i--)
    {
        data[i + 1] = data[i];
    }
    data[pos] = value;
}

void Array::remove(int pos)
{
    if (pos < 0 || pos > size)
    {
        throw std::invalid_argument("remove");
    }
    for (int i = pos; i < size; i++)
    {
        data[i] = data[i + 1];
    }
    size--;
}

int Array::at(int pos) const
{
    if (pos > size || pos < 0)
    {
        throw std::invalid_argument("at");
    }
    return data[pos];
}

void Array::modify(int pos, int newValue)
{
    if (pos > size || pos < 0)
    {
        throw std::invalid_argument("modify");
    }
    data[pos] = newValue;
}

void Array::disp() const
{
    if (size == 0)
    {
        return;
    }
    for (int i = 0; i < size; i++)
    {
        cout << data[i] << " ";
    }
    cout << endl;
}
/***end***/
