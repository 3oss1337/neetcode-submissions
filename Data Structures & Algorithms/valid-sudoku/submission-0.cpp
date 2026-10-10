class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
    vector<unordered_set<char>> rows(9);
    vector<unordered_set<char>> columns(9);
    vector<unordered_set<char>> boxes(9);
    for(int i =0;i<9;i++){
        for(int j =0;j<9;j++)
        {
            char v = board[i][j];
            int box = (i/3) * 3 + (j/3);
            if(v=='.')continue;
            if(rows[i].count(v) || columns[j].count(v) || boxes[box].count(v)) return false;
            rows[i].insert(v);
            columns[j].insert(v);
            boxes[box].insert(v);
        }
    }
    return true;
    }
};
