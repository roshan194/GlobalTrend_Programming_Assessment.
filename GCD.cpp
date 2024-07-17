#include <iostream>
using namespace std;

// Function to find GCD of two numbers using recursion
int gcd(int a, int b) {
    // Base case: GCD(a, 0) = a
    if (b == 0) {
        return a;
    }
    
    // Recursive case: GCD(a, b) = GCD(b, a % b)
    return gcd(b, a % b);
}

int main() {
    // Example usage
    int a = 48;
    int b = 18;
    
    // Calculate GCD and output result using cout
    cout << "GCD of " << a << " and " << b << " is: " << gcd(a, b) << std::endl;

    return 0;
}