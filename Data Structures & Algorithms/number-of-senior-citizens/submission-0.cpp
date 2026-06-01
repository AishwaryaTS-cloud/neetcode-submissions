class Solution {
public:
    int countSeniors(vector<string>& details) {
        int cnt = 0;

        for(string detail : details){
            string age = detail.substr(11, 2);
            int agei = stoi(age); 
            if(agei > 60)
                cnt++;
        }
        return cnt;
    }
};