#include <string>

#include "format.h"

using std::string;

// TODO: Complete this helper function
// INPUT: Long int measuring seconds
// OUTPUT: HH:MM:SS
// REMOVE: [[maybe_unused]] once you define the function
string Format::ElapsedTime(long seconds) { 
    int s, m, h;
    m = seconds / 60;
    s = seconds % 60;
    h = m / 60;
    m = m % 60;
    // TODO: Improve formating here
    return std::to_string(h) + ":" + std::to_string(m) + ":" + std::to_string(s); 
}