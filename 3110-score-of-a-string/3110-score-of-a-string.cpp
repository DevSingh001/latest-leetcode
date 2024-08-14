class Solution {
public:
    int scoreOfString(string s) {
         char cha;
        int sc=0;
        for(auto ch:s){
            cha=int(ch);
        }
        for(int i=0;i<s.length()-1;i++){
            sc+=abs(s[i]-s[i+1]);
        }
        return sc;
    }
};