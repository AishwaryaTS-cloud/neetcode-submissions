class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int ans = 0;
        set<int> st(nums.begin() , nums.end());
        int x = 0;
        int y = 0;

        for(int x : st){
            if(!st.count(x - 1)){
                y = x;

                while(st.count(y))
                    y++;

                ans = max(ans , y - x);
            }
        }
        return ans;
    }
};
