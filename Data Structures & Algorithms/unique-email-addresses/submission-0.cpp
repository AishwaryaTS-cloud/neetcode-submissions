class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        int n = emails.size();
        set<string>st;

        for(int i = 0; i < n; i++){
            int j = 0;
            string local = "";
            string domain = "";

            while(emails[i][j] != '@' && emails[i][j] != '+'){
                if(emails[i][j] != '.')
                    local += emails[i][j];
                j++;
            }

            while(emails[i][j] != '@')
                j++;

            j++;

            while(j < emails[i].size()){
                domain += emails[i][j];
                j++;
            }
            st.insert(local + '@' + domain);
        }
        return st.size();
    }
};