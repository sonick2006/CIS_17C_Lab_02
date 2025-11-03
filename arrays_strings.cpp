// arrays_strings.cpp
#include "arrays_strings.h"

// Implementations

SimpleVector::SimpleVector() : data(nullptr), capacity(0), size(0) {}

SimpleVector::~SimpleVector() {
    // TODO: Free the allocated memory
    delete[] data;
    std::cout << "forgot everything twin" << std::endl;
}

void SimpleVector::push_back(int value) {
    // TODO: Implement push_back with dynamic resizing
    // Double capacity if needed, copy data, add value
    if (size == capacity) {
        capacity = (capacity == 0) ? 1 : capacity * 2;
        int* newData = new int[capacity];
        for (size_t i = 0; i < size; ++i) {
            newData[i] = data[i];
        }
        delete[] data;
        data = newData;
    }

    data[size++] = value;
}

int& SimpleVector::operator[](size_t index) {
    // TODO: Return reference to data[index]
    return *(data + index);
}

size_t SimpleVector::getSize() const {
    // TODO: Return size
    return size;
}

bool SimpleVector::empty() const {
    // TODO: Return true if size == 0
    if (size == 0) {
        return true;
    }
    else {
        return false;
    }
}

void SimpleVector::clear() {
    // TODO: Set size to 0
    size = 0;
}

int SimpleVector::pop_back() {
    // TODO: Remove and return last element, throw if empty
    if (size == 0) {
        throw std::out_of_range("Vector is empty, cant remove anything from an empty vector stupid");
    }

    return data[--size];
}

// StringUtils implementations

std::string StringUtils::reverse(const std::string& str) {
    // TODO: Reverse the string
    std::string reversed = str;
    std::reverse(reversed.begin(), reversed.end());
    return reversed;
}

bool StringUtils::isPalindrome(const std::string& str) {
    // TODO: Check if palindrome (normalize input)
    int left_index = 0;
    int right_index = str.length() - 1;

    while (left_index < right_index) {
        if (str[left_index] != str[right_index]) {
            return false;
        }
        left_index++;
        right_index--;
    }

    return true;

}

int StringUtils::countWords(const std::string& str) {
    // TODO: Count words in string
    if (str.empty()) {
        return 0;
    }

    int count = 0;
    bool inWord = false;

    for (char c : str) {
        if (isspace(c)) {
            inWord = false;
        }
        else if (!inWord) {
            inWord = true;
            count++;
        }
    }
    
    return count;
}

std::string StringUtils::toUpperCase(const std::string& str) {
    // TODO: Convert to Uppercase
    std::string upString = str;
    for (char& c : upString) {
        c = std::toupper(c);
    }

    return upString;
}


std::string StringUtils::toLowerCase(const std::string& str) {
    // TODO: Convert to lowercase
    std::string lowString = str;
    for (char& c : lowString) {
        c = std::tolower(c);
    }

    return lowString;
}