#include <string>
#include <iostream>
namespace log_line {
std::string message(std::string line) {
    int pos1 = line.find(":")+2;
    std::string  result;
    result = line.substr(pos1);
    return result;
    // return the message
}

std::string log_level(std::string line) {
    int pos1 =line.find("[")+1;
    int pos2 = line.find("]");
    int len = pos2-pos1;
    std::string result = line.substr(pos1, len);

    return result;
}

std::string reformat(std::string line) {
    std::string result;
    result= message(line) +" (" +log_level(line)+")";
    return result;
    // return the reformatted message
}
}  // namespace log_line
