#pragma once
#include <iostream>
#include <string>

struct complex
{
    double a = 0;
    double b = 0;
};
complex operator+ (complex x, complex y);
complex operator- (complex x, complex y);
complex operator* (complex x, complex y);
complex operator/ (complex x, complex y);
complex operator+ (complex x, complex y);
std::ostream& operator<< (std::ostream& out, complex x);