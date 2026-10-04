class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        set<string>st;

        for(int i = 0; i < 9; i++){
            for(int j = 0; j < 9; j++){
                if(board[i][j] == '.')
                    continue;

                char c = board[i][j];

                string row = "r" + to_string(i) + c;
                string col = "c" + to_string(j) + c;
                string box = "b" + to_string(i/3) + to_string(j/3) + c;

                if (st.count(row) || st.count(col) || st.count(box))
                    return false;

                st.insert(row);
                st.insert(col);
                st.insert(box);
            }
        }
        return true;
    }
};
