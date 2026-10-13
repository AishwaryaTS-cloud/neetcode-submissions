class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int cnt = 0;
        map<char , int>mp;

        for(char ch : allowed)
            mp[ch]++;

        for(int i = 0; i < words.size(); i++){
            bool valid = true;

            for(int j = 0; j < words[i].size(); j++){
                if(!mp.count(words[i][j])){
                    valid = false;
                    break;
                }

            }
            if(valid)
                cnt++;
        }
        return cnt;
    }
};