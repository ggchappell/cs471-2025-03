// pps.hpp
// Glenn G. Chappell
// 2025-10-08
//
// For CS 471 Fall 2025
// Header for prettyPrintSquare

#ifndef FILE_PPS_HPP_INCLUDED
#define FILE_PPS_HPP_INCLUDED

#include <string>
// For std::string
#include <iostream>
// For std::ostream, std::cout


// Prototypes of functions defined in source file
std::string prettyString(int n);
void prettyPrintSquare(int n,
                       std::ostream & outs=std::cout);

#endif  //#ifndef FILE_PPS_HPP_INCLUDED

