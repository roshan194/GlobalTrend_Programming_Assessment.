#include <iostream>
using namespace std;

unsigned long long factorial(int n) {
    // Base case: factorial of 0 is 1
    if (n == 0) {
        return 1;
    }

    if (n < 0) {
        return -1;
    }

    return n * factorial(n - 1);
}

int main() {
    int n = 5;
    cout << "Factorial of " << n << " is: " << factorial(n) << std::endl;

    return 0;
}