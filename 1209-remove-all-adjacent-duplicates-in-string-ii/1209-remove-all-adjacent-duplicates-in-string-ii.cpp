class Solution {
public:
    bool checkK_1Elements(string &ans,int k,char &ch){
        int it=ans.length()-1;
        for(int i=0;i<k-1;i++){
            if(ch!=ans[it]) return false;
            else it--;
        }
        return true;
    }
    string removeDuplicates(string s, int k) {
        string ans="";
        for(auto ch:s){
            if(ans.length()<k-1){
                ans.push_back(ch);
            }
            else if(checkK_1Elements(ans,k,ch)){
                for(int i=0;i<k-1;i++){
                    ans.pop_back();
                }
            }
            else{
                ans.push_back(ch);
            }
        }
        return ans;
    }
};