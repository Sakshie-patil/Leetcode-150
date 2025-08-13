 bool binarySearch(vector<vector<int>>& mat, int stRow, int n,  int target) {
    int st=0;
    int end = n-1;

    // row is fixed changing column by calculating mid
    while(end >= st) {
        int mid = st+ (end-st)/2;
        if(target == mat[stRow][mid])
        return true;
        else if(target > mat[stRow][mid])
        st = mid + 1;
        else 
        end = mid -1;
    }
    return false;
}

    bool searchMatrix(vector<vector<int>>& mat, int target) {
        int m = mat.size();
        int n = mat[0].size();
        int stRow=0;
        int endRow=m-1;
      
      // fixing row by calculating midRow
        while(endRow >= stRow) {
            int midRow =  stRow + (endRow-stRow)/2;
            if(target >= mat[midRow][0] && target <= mat[midRow][n-1]) 
                return binarySearch(mat, midRow, n, target);
            else if(target > mat[midRow][n-1])
                stRow = midRow + 1;
            else 
                endRow = midRow -1;
        }
       return false;
    }
