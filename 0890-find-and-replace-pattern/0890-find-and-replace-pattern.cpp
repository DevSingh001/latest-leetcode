class Solution {
public:
    void createMapping(string &str){
        char start='a';
        char map[300]={0};
        
        for(auto ch:str){
            if(map[ch]==0){
                map[ch]=start;
                start++;
            }
        }
        for(int i=0;i<str.length();i++){
            char ch=str[i];
            str[i]=map[ch];
        }
    }
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        
        vector<string> ans;
        createMapping(pattern);
            
            for(string s:words){
                string temp=s;
                createMapping(temp);
                if(temp==pattern){
                    ans.push_back(s);
                }
                
            }
        return ans;
    }
};