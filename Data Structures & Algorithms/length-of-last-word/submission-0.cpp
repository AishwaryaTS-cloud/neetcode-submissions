class Solution {
public:
    int lengthOfLastWord(string s) {
        int cnt = 0;
        int n = s.size();
        int j = n - 1;

        while(s[j] == ' ')
            j--;

        for(int i = j ; i >= 0; i--){
            
            if(s[i] == ' ')
                break;
            cnt++;
        }
        return cnt;
    }
};