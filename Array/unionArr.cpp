#include <bits/stdc++.h>
using namespace std;

// Function to merge two sorted arrays into a single sorted array without duplicates
vector<int> sortedArray(vector<int> a, vector<int> b) {
    vector<int> ans; // Initialize a vector to store the merged result
    int n = a.size(); // Size of the first input array
    int m = b.size(); // Size of the second input array
    int i = 0, j = 0; // Pointers for the two input arrays

    // Merge the arrays until one of them is completely processed
    while (i < n && j < m) {
        // If the element from the first array is smaller
        if (a[i] < b[j]) {
            // Check if it's a duplicate, and if not, add it to the merged array
            if (ans.empty() || ans.back() != a[i]) {
                ans.push_back(a[i]);
            }
            i++; // Move the pointer in the first array
        }
        // If the element from the second array is smaller
        else if (b[j] < a[i]) {
            // Check if it's a duplicate, and if not, add it to the merged array
            if (ans.empty() || ans.back() != b[j]) {
                ans.push_back(b[j]);
            }
            j++; // Move the pointer in the second array
        }
        // If both elements are equal
        else {
            // Check if it's a duplicate, and if not, add it to the merged array
            if (ans.empty() || ans.back() != a[i]) {
                ans.push_back(a[i]);
            }
            i++; // Move the pointer in the first array
            j++; // Move the pointer in the second array
        }
    }

    // Add remaining elements from the first array
    while (i < n) {
        if (ans.empty() || ans.back() != a[i]) {
            ans.push_back(a[i]);
        }
        i++; // Move the pointer in the first array
    }

    // Add remaining elements from the second array
    while (j < m) {
        if (ans.empty() || ans.back() != b[j]) {
            ans.push_back(b[j]);
        }
        j++; // Move the pointer in the second array
    }

    return ans; // Return the merged and sorted array without duplicates
}

int main() {
    // Example usage of the sortedArray function
    vector<int> a = { 1, 3, 5, 7 };
    vector<int> b = { 2, 3, 4, 6, 8 };

    // Call the function and get the merged and sorted result
    vector<int> result = sortedArray(a, b);

    // Output the merged and sorted array without duplicates
    cout << "Merged Sorted Array without Duplicates: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
