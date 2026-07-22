#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> ans;
    vector<int> subset;

    void solve(vector<int>& nums, int index) {
        if (index == nums.size()) {
            ans.push_back(subset);
            return;
        }

        // Don't take current element
        solve(nums, index + 1);

        // Take current element
        subset.push_back(nums[index]);
        solve(nums, index + 1);

        // Backtrack
        subset.pop_back();
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        solve(nums, 0);
        return ans;
    }
};

int main() {
    Solution obj;
    vector<int> nums = {1, 2, 3};

    vector<vector<int>> result = obj.subsets(nums);

    for (auto subset : result) {
        cout << "{ ";
        for (int x : subset)
            cout << x << " ";
        cout << "}" << endl;
    }

    return 0;
}