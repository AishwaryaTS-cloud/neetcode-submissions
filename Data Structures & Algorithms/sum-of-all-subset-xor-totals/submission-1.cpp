class Solution {
public:
    int solve(vector<int>& nums , int idx , int ans){
        if(idx == nums.size())
            return ans;

        int take = solve(nums , idx + 1 , ans ^ nums[idx]);
        int skip = solve(nums , idx + 1 , ans);

        return take + skip;
    }

    int subsetXORSum(vector<int>& nums) {
        return solve(nums , 0 , 0);
    }
};