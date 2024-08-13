class Solution {
public:
    bool isPalindrome(string s) {
         
        string str ="";
        int i=0; 
        while( i < s.size()){
            if((s[i]>='A' && s[i] <='Z') || (s[i]>='a' && s[i]<='z') || (s[i]>='0' && s[i]<='9'))
                str += tolower(s[i]);        
            i++;
        }
        
        if(str.size()==0) return true;
        
        int low = 0;
        int high = str.size()-1;
        
        while(low<high){
            if(str[low] != str[high]) return false;
            low++;
            high--;
        }
        
        return true;
    }
    
};