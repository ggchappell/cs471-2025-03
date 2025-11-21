// locale.cpp
// Glenn G. Chappell
// 2025-11-19
//
// For CS 471 Fall 2025
// Demo of C++ Locale

#include <iostream>
using std::cout;
#include <string>
using std::string;
#include <locale>
using std::locale;
using std::use_facet;
using std::numpunct;
#include <typeinfo>
using std::bad_cast;


// get_thousands_separator
// Given locale object return its thousands separator, or a default
// value, if it has none. Print relevant messages.
char get_thousands_separator(const locale & loc)
{
    char thou_sep;  // Thousands separator

    // Get thousands separator & store in thou_sep
    cout << "Attempting to get thousands separator from locale\n";
    try
    {
        const auto & f = use_facet<numpunct<char>>(loc);
                         // Throws std::bad_cast if no facet
        thou_sep = f.thousands_sep();
        cout << "SUCCESS: got thousands separator from locale\n";
    }
    catch(bad_cast & e)
    {
        thou_sep = ',';  // Our default thousands separator
        cout << "FAILURE: locale has NO thousands separator;"
             << " using default value\n";
    }

    // Return result
    return thou_sep;
}


// userPause
// Wait for user to press ENTER: read all chars through first newline.
void userPause()
{
    std::cout.flush();
    while (std::cin.get() != '\n') ;
}


// Main program
// Print a number using the thousands separator, which is obtained from
// the locale, if possible.
int main()
{
    string num_4_digs = "1234";  // 4-digit number to print

    // Print intro message
    cout << "Locale Demo\n\n";

    // Get thousands separator (messages printed)
    locale loc("");  // Preferred locale
    char thou_sep = get_thousands_separator(loc);
    cout << "\n";

    // Print our number
    cout << num_4_digs << " with thousands separator:\n";
    cout << "  " << num_4_digs[0] << thou_sep << num_4_digs.substr(1)
         << "\n\n";

    // Wait for user
    cout << "Press ENTER to quit ";
    userPause();
}

