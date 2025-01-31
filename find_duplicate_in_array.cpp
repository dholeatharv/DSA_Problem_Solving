#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    
    int maxValue = 0; // To determine the max value in arr dynamically
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        maxValue = max(maxValue, arr[i]); // Track the maximum number
    }

    // Create a hash array dynamically based on the largest number in input
    vector<int> hash(maxValue + 1, 0);
    
    for (int i = 0; i < n; i++) {
        hash[arr[i]] += 1;
    }

    int q;
    cin >> q;
    while (q--) {
        int number;
        cin >> number;
        if (number > maxValue) {
            cout << "0 "; // If queried number is out of range, return 0
        } else {
            cout << hash[number] << " "; // Print frequency with space
        }
    }
    cout << endl; // Newline for better formatting
    return 0;
}
