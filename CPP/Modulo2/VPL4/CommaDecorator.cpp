#include <sstream>
#include <vector>
#include <regex>
#include "CommaDecorator.hpp"

std::string CommaDecorator::toString() {
    std::vector<std::string> tokens;
    std::string tokenized;
    std::smatch result;
    std::regex re(R"(?<=\s|^)\d+(?=\s|$)");
    std::stringstream check1(StreamDecorator::toString());
    std::string intermediate;


    while (getline(check1, intermediate, ' '))
    {
        tokens.push_back(intermediate);
    }
    tokenized = "";
    for (int i = 0; i < tokens.size(); ++i) {
        tokenized += tokens[i] + " , ";
    }

    return tokenized;
}

