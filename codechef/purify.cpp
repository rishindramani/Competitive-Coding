#include <iostream>
#include <string>

// returns count of non-overlapping occurrences of 'sub' in 'str'
int countSubstring(const std::string& str, const std::string& sub)
{
    if (sub.length() == 0) return 0;
    int count = 0;
    for (size_t offset = str.find(sub); offset != std::string::npos;
         offset = str.find(sub, offset + sub.length()))
    {
        ++count;
    }
    return count;
}

int main()
{
    std::cout << countSubstring("010111101", "101")    << '\n';
    std::cout << countSubstring("1011100001011101", "101")        << '\n';
    std::cout << countSubstring("111111", "101") << '\n';

    return 0;
}