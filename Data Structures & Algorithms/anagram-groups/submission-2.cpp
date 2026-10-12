class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string , vector<string>> mp;
        vector<vector<string>> ans;

        for(string st : strs){
            string key = st;
            sort(key.begin() , key.end());
            mp[key].push_back(st);
        }

        for(auto it : mp){
            ans.push_back(it.second);
        }
        return ans;
    }
};
