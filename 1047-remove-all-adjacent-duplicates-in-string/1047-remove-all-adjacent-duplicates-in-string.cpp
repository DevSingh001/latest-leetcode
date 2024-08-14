class Solution {
public:
    string removeDuplicates(string s) {
        string ans="";
        for(auto ch:s){
            if(ans==""){
                ans.push_back(ch);
            }
            else if(ans.length()>=0 && ans[ans.length()-1]!=ch){
                ans.push_back(ch);
            }
            else{
                ans.pop_back();
            }
        }
        return ans;
    }
};