#include<bits/stdc++.h>
using namespace std;

// This method uses a frequency array to keep track of whether an element is taken or not.
// T.C. = O(n*n!) && S.C. = O(n) where n is the size of the frequency array.
void generateAllPermutations(vector<int>& arr, vector<vector<int>>& ans, vector<int>& ds, int freq[]) {
  // If the current permutation size is equal to the array size, add it to the result.
  if (ds.size() == arr.size()) {
    ans.push_back(ds);
    return;
  }

  // Iterate through the array elements.
  for (int i = 0; i < arr.size(); i++) {
    // If the element is not taken.
    if (freq[i] == 0) {
      ds.push_back(arr[i]); // Include the element in the current permutation.
      freq[i] = 1;          // Mark the element as taken.
      generateAllPermutations(arr, ans, ds, freq); // Recursive call for the next element.

      freq[i] = 0;          // Backtrack: Mark the element as not taken.
      ds.pop_back();        // Remove the last added element for the next iteration.
    }
  }
}

// Function to generate all permutations without using extra space.
void generateAllPermutationsWithoutExtraSpace(vector<int>& arr, vector<vector<int>>& ans, int index) {
  // If the current index is equal to the array size, add the permutation to the result.
  if (index == arr.size()) {
    ans.push_back(arr);
    return;
  }

  // Iterate through the array starting from the current index.
  for (int i = index; i < arr.size(); i++) {
    swap(arr[i], arr[index]); // Swap the current element with the element at the current index.
    generateAllPermutationsWithoutExtraSpace(arr, ans, index + 1); // Recursive call for the next index.
    swap(arr[i], arr[index]); // Backtrack: Undo the swap for the next iteration.
  }
}

// Describe the working of each variable in the code.
/**
 * freq[i] = 0 means that the element is not taken.
 * freq[i] = 1 means that the element is taken.
 * ds is the current permutation.
*/

int main() {
  vector<int> arr = { 1,2,3 };
  vector<vector<int>> ans;

  // Take an array to mark whether an element is taken or not.
  int freq[arr.size()] = { 0 };

  // Uncomment either of the following lines based on the method you want to test.
  // generateAllPermutations(arr, ans, ds, freq);
  generateAllPermutationsWithoutExtraSpace(arr, ans, 0);

  // Display the generated permutations.
  for (auto x : ans) {
    for (auto y : x) {
      cout << y << " ";
    }
    cout << endl;
  }
  return 0;
}
