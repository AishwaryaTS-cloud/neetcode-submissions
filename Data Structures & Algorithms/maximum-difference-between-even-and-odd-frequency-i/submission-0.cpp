class Solution {
public:
    int maxDifference(string s) {
        map<char,int >mp;

        for(char ch : s)
            mp[ch]++;

        int maxi = 0;
        int mini = INT_MAX;

        for(auto it : mp){
            if(it.second % 2 != 0)
                maxi = max(maxi , it.second);
            if(it.second % 2 == 0)
                mini = min(mini , it.second);
        }
        return maxi - mini;
    }
};