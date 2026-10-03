class Solution {
public:
    vector<vector<int>> ans;

    void solve(vector<int>& nums, int idx , int target , vector<int> & curr){
        if(target == 0){
            ans.push_back(curr);
            return;
        }
        if(idx == nums.size() || target < 0)
            return;

        curr.push_back(nums[idx]);
        solve(nums , idx , target - nums[idx] , curr);
        curr.pop_back();
        solve(nums , idx + 1, target , curr);
    }

    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<int> curr;
        solve(nums , 0 , target , curr);
        return ans;
    }
};
