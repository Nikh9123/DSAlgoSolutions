#include<bits/stdc++.h>
using namespace std;


// Function to check if it's possible to place 'cows' in stalls with minimum distance 'dist'
bool isPossible(int cows, int dist, vector<int> stalls)
{
  int cowCount = 1; // Initialize cow count with 1 as the first cow is always placed
  int last = stalls[0]; // Initialize the position of the last placed cow with the first stall

  // Iterate through the stalls starting from the second stall
  for (int i = 1; i < stalls.size(); i++)
  {
    // If the distance between the current stall and the last placed cow is greater than or equal to 'dist'
    if (stalls[i] - last >= dist)
    {
      cowCount++; // Place a new cow
      last = stalls[i]; // Update the position of the last placed cow
    }

    // If the required number of cows have been placed, return true
    if (cowCount >= cows)
    {
      return true;
    }
  }

  // If it's not possible to place 'cows' with minimum distance 'dist', return false
  return false;
}

// Function to solve the aggressive cows problem using binary search
int aggressiveCows(vector<int>& stalls, int k)
{
  // Sort the stalls in ascending order
  sort(stalls.begin(), stalls.end());

  int n = stalls.size(); // Number of stalls
  int ans = -1; // Initialize the answer with -1

  int low = 1, high = stalls[n - 1]; // Initialize binary search range from 1 to the position of the last stall

  // Perform binary search to find the maximum minimum distance possible
  while (low <= high)
  {
    int mid = (low + high) / 2; // Calculate mid distance

    // If it's possible to place 'k' cows with minimum distance 'mid', update the answer and adjust the binary search range
    if (isPossible(k, mid, stalls))
    {
      ans = mid; // Update the answer
      low = mid + 1; // Adjust the lower bound of the binary search range
    }
    else
    {
      high = mid - 1; // Adjust the upper bound of the binary search range
    }
  }

  // Return the maximum minimum distance where it's possible to place 'k' cows
  return ans;
}


int main() {
  vector<int>stalls = { 0,3,4,7,9,10 };
  int cows = 4 ;
  int ans = aggressiveCows(stalls, 4) ;
  cout<<"the maximum minimum distance where it's possible to place : "<<ans<<endl;
}