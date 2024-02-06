#include <iostream>
#include <cctype>
#include <deque>
#include <vector>
#include <iomanip>
#include <string>
#include <algorithm>
using namespace std;

// Solution: Front is equal Back
bool is_palindrome(const string& s) {
    deque<char> d;

    //vector<char> vec;
    //for (size_t i = 0; i < s.size(); i++) {
    //    if (isalpha(s.at(i)))
    //        vec.push_back(s.at(i));
    //}
    //transform(vec.begin(), vec.end(), vec.begin(), ::toupper);
    //copy(vec.begin(), vec.end(), back_inserter(d));

    for (char c : s) {
        if (isalpha(c))
            d.push_back(toupper(c));
    }

    while (d.front() == d.back()) {
        if (d.size() == 2 || d.size() == 1)
            return true;
        d.pop_front();
        d.pop_back();
    }
    return false;
}

int main()
{
    std::vector<std::string> test_strings{ "a", "aa", "aba", "abba", "abbcbba", "ab", "abc", "radar", "bob", "ana",
        "avid diva", "Amore, Roma", "A Toyota's a toyota", "A Santa at NASA", "C++",
        "A man, a plan, a cat, a ham, a yak, a yam, a hat, a canal-Panama!", "This is a palindrome", "palindrome" };

    std::cout << std::boolalpha;
    std::cout << std::setw(8) << std::left << "Result" << "String" << std::endl;
    for (const auto& s : test_strings) {
        std::cout << std::setw(8) << std::left << is_palindrome(s) << s << std::endl;
    }
    std::cout << std::endl;
    return 0;
}
