class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int max=0;
        for(int i=0;i<sentences.size();i++){
            int count=0;
            for(auto ch:sentences[i]){
                if(ch==' ')
                    count++;
            }
            if(count>max){
                max=count;
            }
        }
        return max+1;
    }
};