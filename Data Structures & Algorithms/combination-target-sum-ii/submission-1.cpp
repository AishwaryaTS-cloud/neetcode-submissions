class Solution {
public:
    vector<vector<int>> ans;

    void solve(vector<int>& nums, int index, int target, vector<int>& current) {
        if (target == 0) {
            ans.push_back(current);
            return;
        }

        if (index == nums.size() || target < 0)
            return;

        // Take
        current.push_back(nums[index]);
        solve(nums, index + 1, target - nums[index], current);
        current.pop_back();

        // Skip all duplicate values
        int next = index + 1;
        while (next < nums.size() && nums[next] == nums[index])
            next++;

        solve(nums, next, target, current);
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());

        vector<int> current;
        solve(candidates, 0, target, current);

        return ans;
    }
};