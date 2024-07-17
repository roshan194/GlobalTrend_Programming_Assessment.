#include <iostream>
using namespace std;

int sumOfDigits(int number) {
    // Base case: if number is less than 10, its sum of digits is the number itself
    if (number < 10 && number >= 0) {
        return number;
    } else if (number < 0) {
        return sumOfDigits(-number); // Handle negative numbers by converting to positive
    }

    // Recursive case: sum of digits is the last digit + sum of digits of remaining number
    return number % 10 + sumOfDigits(number / 10);
}

int main() {
    int number = 12345;
    cout << "Sum of digits of " << number << " is: " << sumOfDigits(number) << std::endl;

    return 0;
}