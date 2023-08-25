class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        // int row = 0;
        // int col = matrix[0].size() - 1;
        // while(row < matrix.size() && col >= 0){
        //     if(matrix[row][col] == target){
        //         return true;
        //     }
        //     if(matrix[row][col] < target){
        //         row++;
        //     }
        //     else{
        //         col--;
        //     }
        // }
        // return false;

        int m = matrix.size(); //row
        int n = matrix[0].size(); //col
        int left = 0, right = m*n-1;
        while(left <= right){
            int mid = left + (right - left) / 2;
            int mid_val = matrix[mid/n][mid%n];
            if(mid_val == target){
                return true;
            }
            if(mid_val < target){
                left = mid + 1;
            }
            else{
                right = mid - 1;
            }
        }
        return false;
    }
};
