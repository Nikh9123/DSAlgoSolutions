#include<bits/stdc++.h>
using namespace std ;
class Solution {
public:
  // Function to find the index of the next smaller element to the left for each element in the array
  vector<int> getNextSmallerLeft(vector<int> arr, int n) {
    stack<int> st;  // Stack to keep track of indices
    vector<int> NSL(n);  // Vector to store the result

    // Iterate over the array from left to right
    for (int i = 0; i < n; i++) {
      // While the stack is not empty and the top element of the stack is greater than or equal to the current element
      while (!st.empty() && arr[st.top()] >= arr[i]) {
        st.pop();  // Pop the top element from the stack
      }

      // If the stack is empty, there is no smaller element to the left
      if (st.empty()) {
        NSL[i] = -1;
      } else {
        // The top element of the stack is the next smaller element to the left
        NSL[i] = st.top();
      }
      // Push the current index to the stack
      st.push(i);
    }
    for(auto x : NSL){
      cout<<x<<" ";
    }cout<<endl;
    return NSL;  // Return the result
  }

  // Function to find the index of the next smaller element to the right for each element in the array
  vector<int> getNextSmallerRight(vector<int> arr, int n) {
    stack<int> st;  // Stack to keep track of indices
    vector<int> NSR(n);  // Vector to store the result

    // Iterate over the array from right to left
    for (int i = n - 1; i >= 0; i--) {
      // While the stack is not empty and the top element of the stack is greater than or equal to the current element
      while (!st.empty() && arr[st.top()] >= arr[i]) {
        st.pop();  // Pop the top element from the stack
      }

      // If the stack is empty, there is no smaller element to the right
      if (st.empty()) {
        NSR[i] = n;
      } else {
        // The top element of the stack is the next smaller element to the right
        NSR[i] = st.top();
      }
      // Push the current index to the stack
      st.push(i);
    }
    cout<<"next greater element : ";
    for(auto x : NSR){
      cout<<x<<" ";
    }cout<<endl;
    return NSR;  // Return the result
  }

  // Function to find the largest rectangle area in a histogram
  int largestRectangleArea(vector<int>& heights) {
    int n = heights.size();  // Size of the histogram

    // Find the NSL and NSR arrays
    vector<int> NSL = getNextSmallerLeft(heights, n);
    vector<int> NSR = getNextSmallerRight(heights, n);

    int maxArea = 0;  // Initialize the maximum area

    // Iterate over the histogram
    for (int i = 0; i < n; i++) {
      // Calculate the width and area of the rectangle with the current height
      int width = NSR[i] - NSL[i] - 1;
      int area = width * heights[i];
      // Update the maximum area
      maxArea = max(maxArea, area);
    }

    return maxArea;  // Return the maximum area
  }
};

int main() {
  // Define the histogram
  vector<int> heights = {2, 1, 5, 6, 2, 3};
  Solution s;  // Create a Solution object
  // Find the largest rectangle area in the histogram
  int ans = s.largestRectangleArea(heights);

  // Print the result
  cout << "Largest Rectangle Area is: " << ans << endl;

  return 0;
}