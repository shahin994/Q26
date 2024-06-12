#include <iostream>

int main() {
    int num, reversedNum = 0;

    std::cout << "Enter a three-digit number: ";
    std::cin >> num;

    if (num < 100 || num > 999) {
        std::cout << "Please enter a valid three-digit number." << std::endl;
        return 0;
    }

    while (num != 0) {
        int digit = num % 10;
        reversedNum = reversedNum * 10 + digit;
        num /= 10;
    }

    std::cout << "Reversed number: " << reversedNum << std::endl;

    return 0;
}