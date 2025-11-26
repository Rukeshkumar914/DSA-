// subset 
#include <iostream>
#include <vector>
using namespace std;

void solve(vector<int>& nums, vector<int> output, int index, vector<vector<int>>& ans)
{
    // Base case
    if (index >= nums.size()) {
        ans.push_back(output);
        return;
    }

    // Exclude current element
    solve(nums, output, index + 1, ans);

    // Include current element
    output.push_back(nums[index]);
    solve(nums, output, index + 1, ans);
}

vector<vector<int>> subsets(vector<int>& nums)
{
    vector<vector<int>> ans;
    vector<int> output;
    int index = 0;
    solve(nums, output, index, ans);
    return ans;
}

int main()
{
    vector<int> nums = {1, 2, 3};
    vector<vector<int>> ans = subsets(nums);

    cout << "All subsets are:\n";
    for (auto subset : ans) {
        cout << "[ ";
        for (auto num : subset) {
            cout << num << " ";
        }
        cout << "]\n";
    }
  
    return 0;
}