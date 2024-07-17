#include <iostream>
#include <vector>
#include <algorithm> 

using namespace std;

int maxDifference(const vector<int>& arr) {
    if (arr.size() < 2) {
        return 0; 
    }
    
    int minElem = *min_element(arr.begin(), arr.end());
    int maxElem = *max_element(arr.begin(), arr.end());

    return maxElem - minElem;
}

int main() {
    vector<int> arr = {2, 4, 1, 7, 3, 9, 5};
    
    cout << "Maximum difference between any two elements in the array is: "
         << maxDifference(arr) << endl;

    return 0;
}