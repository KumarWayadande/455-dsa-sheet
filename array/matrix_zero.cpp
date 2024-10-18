class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        map<int, bool> row;
        map<int, bool> col;
        int m = matrix.size();
        int n = matrix[0].size();
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if(matrix[i][j] == 0){
                    row[i] = true;
                    col[j] = true;
                }
            }
        }

        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if(row[i] == true){
                    matrix[i][j] = 0;
                }
                if(col[j] == true){
                    matrix[i][j] = 0;
                }
            }
        }

    }
};