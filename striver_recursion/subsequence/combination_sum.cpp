#include<bits/stdc++.h>
using namespace std;

// https : // leetcode.com/problems/combination-sum/

class Solution
{
public:
    vector<vector<int>> ans;

    void solve(int idx, int target, vector<int> &arr, vector<int> &temp)
    {

        if (target == 0)
        {
            ans.push_back(temp);
            return;
        }

        if (target < 0)
            return;

        if (idx >= arr.size())
            return;

        temp.push_back(arr[idx]);
        solve(idx, target - arr[idx], arr, temp);
        temp.pop_back();

        solve(idx + 1, target, arr, temp);
    }

    vector<vector<int>> combinationSum(vector<int> &nums, int target)
    {
        ans.clear();

        vector<int> temp;

        solve(0, target, nums, temp);

        return ans;
    }
};