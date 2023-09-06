#include <bits/stdc++.h>
using namespace std;
int maxProfit(vector<int> prices) {
  /*
  //* solution 1

  int profit = 0, maxProfit = 0;
  int mini = INT_MAX;
  for (int i = 0; i < prices.size(); i++)
  {
    if ((i != prices.size() - 1) && prices[i] < prices[mini])
    {
      mini = i;
    }
  }
  for (int i = mini; i < prices.size() - 1; i++)
  {
    if (prices[mini] < prices[i + 1])
    {
      profit = (prices[i + 1] - prices[mini]);
      maxProfit = max(maxProfit, profit);
    }
  }
  return maxProfit;
  */

  //*Optimal solution 

 //suppose first element have minimum price
  int mini = prices[0];
  int profit = 0, maxProfit = 0;

  for (int i = 1; i < prices.size(); i++)
  {
    profit = prices[i] - mini;
    maxProfit = max(maxProfit, profit);

    //keep the track of minimum element while traversing the array 
    mini = min(prices[i], mini);
  }
  return maxProfit;

}
using namespace std;
int main() {
  vector<int> arr = { 7,6,4,3,1 };
  cout << maxProfit(arr);
}