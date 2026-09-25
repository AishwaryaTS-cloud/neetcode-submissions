class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int total = nums[0];

        int cmin = nums[0];
        int amin = nums[0];

        int cmax = nums[0];
        int amax = nums[0];

        for(int i = 1; i < nums.size(); i++){

            total += nums[i];

            cmin = min(nums[i] , cmin + nums[i]);
            amin = min(amin , cmin);

            cmax = max(nums[i] , cmax + nums[i]);
            amax = max(amax , cmax);
        }

        if(amax < 0)
            return amax;
        
        return max(amax , total - amin);
    }
};