class Solution {
public:
    int expand(string str,int i,int j){
        int count=0;
        while(i>=0 && j<str.length() && str[i]==str[j]){
            count++;
            i--;
            j++;
        }
        return count;
    }
    int countSubstrings(string s) {
        int totalCount=0;
        for(int center=0;center<s.length();center++){
            int oddCount=expand(s,center,center);
            int evenCount=expand(s,center,center+1);
            totalCount+=oddCount+evenCount;
        }
        return totalCount;
    }
};