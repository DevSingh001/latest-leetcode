class Solution {
public:
    void sortColors(vector<int>& nums) {
        int zeroCount=0;
        int oneCount=0;
        int twoCount=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                zeroCount++;
            }
             if(nums[i]==1){
                oneCount++;
            }
             if(nums[i]==2){
                twoCount++;
            }
            
        }
        int i=0;
        while(zeroCount--){
            nums[i]=0;
            i++;
        }
         while(oneCount--){
            nums[i]=1;
            i++;
        }
         while(twoCount--){
            nums[i]=2;
            i++;
        }
        for(int i=0;i<nums.size();i++)
        {
            cout<<nums[i];
        }
    }
};