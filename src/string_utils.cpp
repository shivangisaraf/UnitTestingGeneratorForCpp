#include "string_utils.h"
#include <algorithm>

std::string StringUtils::toUpper(const std::string& input) {
    std::string result = input;
    std::transform(result.begin(), result.end(), result.begin(), ::toupper);
    return result;
}

std::string StringUtils::reverse(const std::string& input) {
    return std::string(input.rbegin(), input.rend());
}

