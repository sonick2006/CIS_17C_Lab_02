#include "arrays_strings.h"

int main() {
    // TODO: Add your own test code here if needed
    std::cout << "Implement the classes and run the tests!" << std::endl;

    SimpleVector vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    std::cout << "Vector size: " << vec.getSize() << std::endl;
    std::cout << "Vector elements: ";
    for (size_t i = 0; i < vec.getSize(); ++i) {
        std::cout << vec[i] << " ";
    }
    std::cout << std::endl;

    // String demo
    std::string testStr = "Hello World";
    std::cout << "Original: " << testStr << std::endl;
    std::cout << "Reversed: " << StringUtils::reverse(testStr) << std::endl;
    std::cout << "Upper: " << StringUtils::toUpperCase(testStr) << std::endl;
    std::cout << "Lower: " << StringUtils::toLowerCase(testStr) << std::endl;
    std::cout << "Word count: " << StringUtils::countWords(testStr) << std::endl;
    std::cout << "Is palindrome 'racecar': " << StringUtils::isPalindrome("racecar") << std::endl;
    return 0;
}