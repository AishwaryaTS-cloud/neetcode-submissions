class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int>res;
        
        for(int num : nums){
            int ans = 0;
            ans = num * num;
            res.push_back(ans);
        }
        sort(res.begin() , res.end());
        return res;
    }
};