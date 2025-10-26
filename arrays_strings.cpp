// arrays_strings.cpp
#include "arrays_strings.h"

// Implementations

SimpleVector::SimpleVector() : data(nullptr), capacity(0), size(0) {}

SimpleVector::~SimpleVector() {
    // TODO: Free the allocated memory
}

void SimpleVector::push_back(int value) {
    // TODO: Implement push_back with dynamic resizing
    // Double capacity if needed, copy data, add value
}

int& SimpleVector::operator[](size_t index) {
    // TODO: Return reference to data[index]
}

size_t SimpleVector::getSize() const {
    // TODO: Return size
}

bool SimpleVector::empty() const {
    // TODO: Return true if size == 0
}

void SimpleVector::clear() {
    // TODO: Set size to 0
}

int SimpleVector::pop_back() {
    // TODO: Remove and return last element, throw if empty
}

// StringUtils implementations

std::string StringUtils::reverse(const std::string& str) {
    // TODO: Reverse the string
}

bool StringUtils::isPalindrome(const std::string& str) {
    // TODO: Check if palindrome (normalize input)
}

int StringUtils::countWords(const std::string& str) {
    // TODO: Count words in string
}

std::string StringUtils::toUpperCase(const std::string& str) {
    // TODO: Convert to Uppercase
}


std::string StringUtils::toLowerCase(const std::string& str) {
    // TODO: Convert to lowercase
}