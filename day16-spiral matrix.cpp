class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>ans;
        int m = matrix.size();
        int n = matrix[0].size();
        int stRow = 0;
        int stCol = 0;
        int endRow = m-1;
        int endCol = n-1;

        while(stRow <= endRow && stCol <= endCol) {

            // top
             for(int i=stCol; i<=endCol ; i++) {
                ans.push_back(matrix[stRow][i]);
            }

            // right
            for(int j=stRow+1 ; j<=endRow ; j++) {
                ans.push_back(matrix[j][endCol]);
            }

            // bottom
            for(int i=endCol-1; i>=stCol; i--) {
                if(stRow == endRow) break;
                ans.push_back(matrix[endRow][i]);
            }

            // left
            for(int j=endRow-1 ; j>= stRow+1; j--) {
                if(stCol == endCol) break;
                ans.push_back(matrix[j][stCol]);
            }
    }
    return ans;
    }
};
