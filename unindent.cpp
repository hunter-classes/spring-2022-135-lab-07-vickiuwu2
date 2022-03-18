#include <iostream>
#include <cctype>

#include "unindent.h"

std::string removeLeadingSpaces(std::string line)
{
    std::string result = "";
    for (int i = 0; i < line.length(); i++)
    {
        if (isspace(line[i]) == false)
        {
            result = line.substr(i, (line.length()));
            break;
        }
    }
    return result;
}