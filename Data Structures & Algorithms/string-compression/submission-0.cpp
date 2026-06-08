class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size();

        int i = 0;      // read pointer
        int write = 0;  // write pointer

        while (i < n) {
            char curr = chars[i];
            int count = 0;

            // Count consecutive occurrences
            while (i < n && chars[i] == curr) {
                count++;
                i++;
            }

            // Write character
            chars[write++] = curr;

            // Write count if > 1
            if (count > 1) {
                string cnt = to_string(count);

                for (char c : cnt) {
                    chars[write++] = c;
                }
            }
        }

        return write;
    }
};