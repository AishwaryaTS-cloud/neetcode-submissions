class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int>res;
        int maxi = maxi = nums.size();
        int mini = *min_element(nums.begin() , nums.end());

        // if(maxi == mini)
        //     maxi = nums.size();

        for(int i = 1; i <= maxi; i++){
            if(find(nums.begin() , nums.end() , i) == nums.end())
                res.push_back(i);
            
        }
        return res;
    }
};