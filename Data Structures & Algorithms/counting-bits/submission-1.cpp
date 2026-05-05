class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>res;

        for(int x = 0 ; x <= n; x++){
            int cnt = 0;
            int i = x;
            while(i){
                i = i & (i - 1);
                cnt++;
            }
            res.push_back(cnt);
        }
        return res;
    }
};
