// pps.cpp
// Glenn G. Chappell
// 2025-10-08
//
// For CS 471 Fall 2025
// Source for prettyPrintSquare

#include "pps.hpp"
#include <string>
using std::to_string;
using std::string;
#include <cstddef>
using std::size_t;
#include <iostream>
using std::cout;
using std::ostream;
#include <sstream>
using std::ostringstream;


string prettyString(int n)
{
    int sqr = n*n;
    auto sqr_str = to_string(sqr);
    size_t len = sqr_str.size();

    ostringstream result;
    for (size_t i = 0; i < 4+len; ++i)
        result << '*';
    result << '\n';

    result << "* " << sqr_str << " *\n";

    for (size_t i = 0; i < 4+len; ++i)
        result << '*';
    result << '\n';

    return result.str();
}


void prettyPrintSquare(int n,
                       ostream & outs)
{
    outs << prettyString(n);
}

