bool isValidSudoku(vector<vector<char>>& board) {
        bool row[9][9] = {false};
        bool col[9][9] = {false};
        bool box[9][9] = {false};

        // row
        for(int i=0;i<9;++i) {
            // column
            for(int j=0;j<9;++j) {
                // we are just checking for the cells who are filled
                if(board[i][j] == '.') continue;

                // convert 1-9 to 0-8
                int num = board[i][j] - '1';

                // Identify which 3x3 box this cell belongs to
                // Boxes are numbered 0-8:
                // 0 1 2
                // 3 4 5
                // 6 7 8
                int k = (i/3)*3 + (j/3);

                //If the number has already appeared in the same row, column, or box → invalid board
                if(row[i][num] || col[j][num] || box[k][num]) return false;

                // Mark the number as seen in this row, column, and box
                row[i][num] =  true;
                col[j][num] = true;
                box[k][num] = true;
        }
    }
     return true;
  } 
