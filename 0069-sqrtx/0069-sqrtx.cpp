class Solution {
public:
    int mySqrt(int x) {
        int ans=-1;
        int s=0;
        int end=x;
        while(s<=end){
            long mid=s+(end-s)/2;
            if(mid*mid==x){
                return mid;
            }
            else if((mid*mid)<x){
                ans=mid;
                s=mid+1;
            }
            else{
                end=mid-1;
            }
        }
        return ans;
    }
};