# Palindrome-Checker
This code implements a palindrome checker in C++. A palindrome is a sequence of characters that reads the same forwards and backwards, disregarding spaces, punctuation, and capitalization.

The is_palindrome function takes a string as input and returns true if the string is a palindrome and false otherwise. It first creates a deque (double-ended queue) to store the characters of the string after removing non-alphabetic characters and converting all characters to uppercase. Then, it compares characters from the front and back of the deque. If the characters match, it continues checking until there are no more characters left or only one character is left. If at any point the characters don't match, it returns false.
