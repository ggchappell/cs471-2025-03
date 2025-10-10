// use_pps.cpp
// Glenn G. Chappell
// 2025-10-08
//
// For CS 471 Fall 2025
// Simple main program for prettyPrintSquare

#include "pps.hpp"  // For prettyPrintSquare
#include <iostream>
using std::cout;


// Main program
// Call prettyPrintSquare
int main()
{
    int n = 11;
    cout << "n = " << n << "; calling prettyPrintSquare\n";
    prettyPrintSquare(n);
}

