class Solution {
public:
    vector<vector<int>> ans;

    void solve(vector<int>& nums, int index, vector<int>& current, vector<bool>& used) {
        if (current.size() == nums.size()) {
            ans.push_back(current);
            return;
        }

        if (index == nums.size())
            return;

        if (!used[index]) {
            used[index] = true;
            current.push_back(nums[index]);

            solve(nums, 0, current, used);

            current.pop_back();
            used[index] = false;
        }

        solve(nums, index + 1, current, used);
    }

    vector<vector<int>> permute(vector<int>& nums) {
        vector<int> current;
        vector<bool> used(nums.size(), false);

        solve(nums, 0, current, used);

        return ans;
    }
};