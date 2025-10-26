// arrays_strings.h
#ifndef ARRAYS_STRINGS_H
#define ARRAYS_STRINGS_H

#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>

// TODO: Include any additional headers you need (e.g., <stdexcept> for exceptions)

// Simple dynamic array implementation
class SimpleVector {
private:
    int* data;
    size_t capacity;
    size_t size;

public:
    SimpleVector();
    ~SimpleVector();
    void push_back(int value);
    int& operator[](size_t index);
    size_t getSize() const;
    bool empty() const;
    void clear();
    int pop_back();
};

// String utility functions
class StringUtils {
public:
    static std::string reverse(const std::string& str);
    static bool isPalindrome(const std::string& str);
    static int countWords(const std::string& str);
    static std::string toUpperCase(const std::string& str);
    static std::string toLowerCase(const std::string& str);
};

#endif // ARRAYS_STRINGS_H