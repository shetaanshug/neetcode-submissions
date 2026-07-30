class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_set<char>row,column;
        vector<unordered_set<char>>box(9);
int length = board[0].size();
        for(int i=0;i<length;i++){
            for(int j=0;j<length;j++){
                if(board[i][j]!='.')
               { if(row.count(board[i][j]))
                    return false;
                row.insert(board[i][j]);
           
                          int box_num = (i/3)*3 +j/3;
                if(box[box_num].count(board[i][j]))
                    return false;
                box[box_num].insert(board[i][j]);

               }
               if(board[j][i]!='.')

{
                if(column.count(board[j][i]))
                    return false;
                column.insert(board[j][i]);
}
 
                 }
            row.clear();
            column.clear();
            
        }
        return true;
    }
};
