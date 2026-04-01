class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int ele = -1;
        int cnt = 0;

        // Boyer Moore Voting Phase
        for(int num : nums){
            if(cnt == 0)
                ele = num;

            if(num == ele)
                cnt++;
            else
                cnt--;
        }

        // Verification Phase
        cnt = 0;
        for(int num : nums){
            if(num == ele)
                cnt++;
        }

        if(cnt > nums.size() / 2)
            return ele;

        return -1; // if no majority element
    }
};