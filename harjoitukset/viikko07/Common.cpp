#include "Common.hpp"
#include <string>

using std::string;

string create_heading(string e) {
    for (int i = 0; i < e.length(); ++i)
        e[i] = toupper(e[i]);

    return "--- " + e + " ---";
}
