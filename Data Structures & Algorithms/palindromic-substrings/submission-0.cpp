class Solution {
public:
    int expand(string s , int left , int right){
        int n = s.size();
        int cnt = 0;
        while(left >= 0 && right < n && s[left] == s[right]){
            left--;
            right++;
            cnt++;
        }
        return cnt;
    }

    int countSubstrings(string s) {
        int n = s.size();
        int ans = 0;

        for(int i = 0; i < n; i++){
            int odd = expand(s , i , i);
            int even = expand(s , i , i+ 1);

            ans += odd;
            ans += even;
        }
        return ans;
    }
};
