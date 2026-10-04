class NumMatrix {
    vector<vector<int>> pre;

public:
    NumMatrix(vector<vector<int>>& matrix) {
        int n = matrix.size(), m = matrix[0].size();
        pre.assign(n + 1, vector<int>(m + 1));

        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= m; j++)
                pre[i][j] = matrix[i-1][j-1] + pre[i-1][j]
                          + pre[i][j-1] - pre[i-1][j-1];
    }

    int sumRegion(int r1, int c1, int r2, int c2) {
        return pre[r2+1][c2+1] - pre[r1][c2+1]
             - pre[r2+1][c1] + pre[r1][c1];
    }
};