class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> v;
        // int temp=0;
        for(int i=0;i<words.size();i++){
            
            for(auto ch:words[i]){
                if(ch==x){
                   v.push_back(i);
                    break;
                   
                }
                
            }
            
           
        
        }
        
        return v;
    }
};