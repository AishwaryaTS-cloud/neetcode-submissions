class Solution {
public:
    int maxArea(vector<int>& heights) {
        int l = 0;
        int r = heights.size() - 1;
        int ans = INT_MIN;

        while(l < r){
            int height = min(heights[l] , heights[r]);
            int weidth = r - l;

            int area = height * weidth;

            ans = max(ans , area);

            if(heights[l] < heights[r])
                l++;
            else 
                r--;
        }
        return ans;
    }
};
