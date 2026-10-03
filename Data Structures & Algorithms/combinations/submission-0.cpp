class Solution {
public:
    vector<vector<int>> ans;

    void solve(int n, int k , int idx , vector<int> & curr){
        if(curr.size() == k){
            ans.push_back(curr);
            return;
        }
        if(idx > n)
            return;

        curr.push_back(idx);
        solve( n  , k , idx + 1 , curr);
        curr.pop_back();
        solve(n , k , idx + 1 , curr);
    }

    vector<vector<int>> combine(int n, int k) {
        vector<int> curr;

        solve(n , k , 1 , curr);
        return ans;
    }
};