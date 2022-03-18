#include <iostream>
#include <cctype>
#include <fstream>

#include "unindent.h"
#include "indent.h"

int main()
{
    std::string s;
    int open = 0; 
    while (getline(std::cin, s)) 
    {
        s = removeLeadingSpaces(s);
        if (s.length() > 0)
        {
            if (s.at(0) == '}')
            {
                open -= countChar(s,'}');
            }
                
            for (int x = 0; x < open; x++) 
            {
                std::cout << "\t";
            }
        }
        std::cout << s << std::endl; 
        open += countChar(s, '{'); 
        if (s.length() > 0)
        {
            if (s.at(0) != '}')
            {
                open -= countChar(s,'}');
            }
        }
    }
    return 0;
}