class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        vector<int>v1;
        int n=mat.size();
        int ans=0;
        int index=0;
        for(int i=0;i<n;i++){
            int count=0;
            for(int j=0;j<mat[i].size();j++){
                if(mat[i][j]==1){
                    count++;
                }
            }
            if(count>ans){
                ans=count;
                index=i;
            }
        }
        v1.push_back(index);
        v1.push_back(ans);
        return v1;
    }
};