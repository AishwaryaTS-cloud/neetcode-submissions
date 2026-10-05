class Solution {
public:
    pair<int , int> expand(string s , int left , int right){
        int n = s.size();
        while(left >= 0 && right < n && s[left] == s[right]){
            left--;
            right++;
        }
        return {left + 1 , right - left - 1};
    }

    string longestPalindrome(string s) {
        int start = 0;
        int len = 1;

        for(int i = 0; i < s.size(); i++){

            pair<int , int> odd = expand(s , i , i);
            pair<int , int> even = expand(s , i , i + 1);

            if(odd.second > len){
                start = odd.first;
                len = odd.second;
            }
            if(even.second > len){
                start = even.first;
                len = even.second;
            }
        }
        return s.substr(start , len);
    }
};
