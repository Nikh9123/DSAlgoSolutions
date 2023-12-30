#include<bits/stdc++.h>
using namespace std;

void backtrack(vector<vector<int>>& res, vector<int>& temp, vector<int>& candidates, int target, int start)
{
    if(target < 0)
        return;
    else if(target == 0)
        res.push_back(temp);
    else
    {
        for(int i = start; i < candidates.size(); i++)
        {
            temp.push_back(candidates[i]);
            backtrack(res, temp, candidates, target - candidates[i], i);
            temp.pop_back();
        }
    }
}

vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        
    vector<vector<int>> res;
    vector<int> temp;
    sort(candidates.begin(), candidates.end());
    backtrack(res, temp, candidates, target, 0);
    return res;
}

int main()
{
    vector<int> candidates = {2,3,6,7};
    int target = 7;
    vector<vector<int>> res = combinationSum(candidates, target);
    for(auto i : res)
    {
        for(auto j : i)
            cout << j << " ";
        cout << endl;
    }
    return 0;
}