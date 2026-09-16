class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> st;

        for(string op : operations){
            if(op == "+"){
                int n = st.size();
                st.push_back(st[n - 2] + st[n - 1]);
            }
            else if(op == "D")
                st.push_back(2 * st.back());
            else if(op == "C")
                st.pop_back();
            else
                st.push_back(stoi(op));
        }
        int ans = 0;
        for(int s : st)
            ans += s;
        return ans;
    }
};