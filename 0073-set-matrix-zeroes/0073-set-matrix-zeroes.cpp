class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int row=matrix.size();
        int col=matrix[0].size();
        vector<int> rows;
        vector<int> cols;
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(matrix[i][j]==0){
                    rows.push_back(i);
                    cols.push_back(j);
                }
            }
        }
        for(int k=0;k<rows.size();k++){
            for(int i=0;i<col;i++){
                matrix[rows[k]][i]=0;
            }
        }
        for(int k=0;k<cols.size();k++){
            for(int i=0;i<row;i++){
                matrix[i][cols[k]]=0;
            }
        }
    }
};