// pps_test.cpp
// Glenn G. Chappell
// 2025-10-08
//
// For CS 471 Fall 2025
// Test suite for prettyPrintSquare
// Uses doctest unit-testing framework

#include "pps.hpp"  // For prettyPrintSquare
#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include <string>
using std::string;


TEST_CASE( "Test prettyString" )
{
    int param = 11;
    string expected = "*******\n* 121 *\n*******\n";
    REQUIRE(prettyString(param) == expected);
}


TEST_CASE( "Test prettyPrintSquare" )
{
    int param = 11;
    string expected = "*******\n* 121 *\n*******\n";
    // TODO: FINISH THIS!!!
}

