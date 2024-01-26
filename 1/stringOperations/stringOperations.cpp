#include <iostream>
#include <string>

using namespace std;

// Concatenation of strings

string concatString(string s1, string s2)
{
    return s1 + s2;
}

// Position of substring

int positionSubstring(string s1, string s2)
{
    size_t i = 0, j = 0;
    while (i < s1.length())
    {
        if (s1[i] == s2[j])
        {
            i++;
            j++;
        }
        else
        {
            i++;
            j = 0;
        }
        if (j == s2.length())
        {
            return static_cast<int>(i - j);
        }
    }
    return -1;
}

// Index of a particular character in a string

int indexCharacter(string s1, char c)
{
    for (size_t i = 0; i < s1.length(); i++)
    {
        if (s1[i] == c)
        {
            return static_cast<int>(i);
        }
    }
    return -1;
}

// Find the Index of the First Occurrence in a String

int strStr(string s1, string s2)
{
    size_t h = s1.size(), n = s2.size();
    for (size_t i = 0; i <= h - n; ++i)
    {
        size_t j = 0;
        for (; j < n; ++j)
        {
            if (s1[i + j] != s2[j])
            {
                break;
            }
        }
        if (j == n)
        {
            return static_cast<int>(i);
        }
    }
    return -1;
}



int main()
{
    std::string s1 = "HelloWorld";
    std::string s2 = "World";
    std::cout << concatString(s1, s2) << endl;
    std::cout << positionSubstring(s1, s2) << endl;
    std::cout << indexCharacter(s1, 'e') << endl;
    std::cout << strStr(s1, s2) << endl;
    return 0;
}
