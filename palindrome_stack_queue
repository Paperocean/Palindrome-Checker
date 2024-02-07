#include <cctype>
#include <stack>
#include <queue>
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

bool is_palindrome(const std::string& str)
{
    queue<char> q;
    stack<char> s;

    for (char c : str) {
        if (isalpha(c)) {
            s.push(toupper(c)); // <- Stack works like Reverse String
            q.push(toupper(c)); // <- In this example Queue works like String
        }
    }

    // Stack and Queue solution
    while (!q.empty()) {
        if (q.front() != s.top())
            return false;
        q.pop();
        s.pop();
    }
    return true;

    // String and Stack solution
    /*for (size_t i = 0; i < str.size(); i++) {
        if (isalpha(str[i])) {
            if (toupper(str[i]) == s.top())
                s.pop();
            else return false;
        }
    }
    return true;*/

    // String, Stack and Queue solution
    /*string str2{}, str3{};
    while (!s.empty()) {
        str2 += s.top();
        s.pop();
    }
    while (!q.empty()) {
        str3 += q.front();
        q.pop();
    }
    if (str2 == str3) {
        return true;
    }
    else return false;*/

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
