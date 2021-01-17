#pragma once
#include <string>

#include "gtest/gtest.h"
#include <iostream>

struct complex
{
    double a;
    double b;
};
complex operator+ (complex x, complex y);
complex operator- (complex x, complex y);
complex operator* (complex x, complex y);
complex operator/ (complex x, complex y);
complex operator+ (complex x, complex y);
std::ostream& operator<< (std::ostream& out, complex x);
