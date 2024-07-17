#include <iostream>
#include <string>
#include <cctype> 

using namespace std;

bool containsOnlyAlphabetic(const string& str) {
    for (char ch : str) {
        if (!isalpha(ch)) {
            return false;
        }
    }
    return true;
}

int main() {
    string str1 = "HelloWorld";
    string str2 = "Hello123";
    
    // Test cases
    cout << boolalpha;
    cout << "str1 contains only alphabetic characters: " << containsOnlyAlphabetic(str1) << endl; 
    cout << "str2 contains only alphabetic characters: " << containsOnlyAlphabetic(str2) << endl; 

    return 0;
}