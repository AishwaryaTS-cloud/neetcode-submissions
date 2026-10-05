class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxP = nums[0];
        int minP = nums[0];
        int ans = nums[0];

        for(int i = 1; i < nums.size(); i++){
            int x = nums[i];

            if(x < 0)
                swap(maxP , minP);

            maxP = max(x , maxP * x);
            minP = min(x , minP * x);

            ans = max(maxP , ans);
        }
        return ans;
    }
};
