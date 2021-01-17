#include "pch.h"
#include <iostream>
#include <fstream>
#include <windows.h>

using namespace std;

complex operator+ (complex x, complex y)
{
    complex z;
    z.a = x.a + y.a;
    z.b = x.b + y.b;
    return z;
}
complex operator- (complex x, complex y)
{
    complex z;
    z.a = x.a - y.a;
    z.b = x.b - y.b;
    return z;
}
complex operator* (complex x, complex y)
{
    complex z;
    z.a = ((x.a * y.a) - (x.b * y.b));
    z.b = ((x.b * y.a) + (x.a * y.b));
    return z;
}
complex operator/ (complex x, complex y)
{
    complex z;
    if (((y.a * y.a) + (y.b * y.b)) != 0)
    {
        z.a = (((x.a * y.a) + (x.b * y.b)) / ((y.a * y.a) + (y.b * y.b)));
        z.b = (((x.b * y.a) - (x.a * y.b)) / ((y.a * y.a) + (y.b * y.b)));
        return z;
    }
    else
    {
        cout << "ACHTUNG!!! Деление на 0 строго запрещено! Будет выведено обратно делимое без изменений." << endl;
        return x;
    }
}
std::ostream& operator<< (std::ostream& out, complex x)
{
    if ((x.a != 0) && (x.b != 0))
    {
        out << x.a << " + " << x.b << "i";
    }
    else
    {
        if ((x.a == 0) && (x.b != 0))
        {
            out << x.b << "i";
        }
        else
        {
            if ((x.a != 0) && (x.b == 0))
            {
                out << x.a;
            }
            else
                if ((x.a == 0) && (x.b == 0))
                {
                    out << "0";
                }
        }
    }
    return out;
}