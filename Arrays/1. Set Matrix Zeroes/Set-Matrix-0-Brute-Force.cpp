class Solution {
public:
    
    void markRow(int i, vector<vector<int>>& matrix){
        for(int j=0; j<matrix[0].size(); j++){
            if(matrix[i][j] != 0){
                matrix[i][j] = -1;
            }
        }
    }
    void markCol(int j, vector<vector<int>>& matrix){
        for(int i=0; i<matrix.size(); i++){
            if(matrix[i][j] != 0){
                matrix[i][j] = -1;
            }
        }
    }
    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(matrix[i][j] == 0){
                    markRow(i, matrix);
                    markCol(j, matrix);
                }
            }
        }
        
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(matrix[i][j] == -1){
                    matrix[i][j] = 0;
                }
            }
        }
        // return matrix;
    }
};
