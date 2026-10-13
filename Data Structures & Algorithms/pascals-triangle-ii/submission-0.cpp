class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        map<char, int> available;

        for (int i = 0; i < chars.size(); i++)
            available[chars[i]]++;

        int answer = 0;

        for (int i = 0; i < words.size(); i++) {
            map<char, int> freq;
            bool valid = true;

            for (int j = 0; j < words[i].size(); j++)
                freq[words[i][j]]++;

            for (auto p : freq) {
                if (p.second > available[p.first]) {
                    valid = false;
                    break;
                }
            }

            if (valid)
                answer += words[i].size();
        }

        return answer;
    }
};