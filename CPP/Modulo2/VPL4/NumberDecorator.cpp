#include <sstream>
#include <vector>
#include <regex>
#include "NumberDecorator.hpp"


std::string NumberDecorator::toString() {
    std::vector<std::string> tokens;
    std::string tokenized;
    std::smatch result;
    std::stringstream check1(StreamDecorator::toString());
    std::string intermediate;

    while (getline(check1, intermediate, ' '))
    {
        tokens.push_back(intermediate);
    }
    tokenized = "";
    for (int i = 0; i < tokens.size(); ++i) {
        if (std::regex_search(tokens[i], result, std::regex("^\\d+$"))) {
            tokenized = " +" + tokens[i];
        } else {
            tokenized += tokens[i] + " , ";
        }
    }

    return tokenized;
}

