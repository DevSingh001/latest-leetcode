class Solution {
public:
    int pivot(vector<int>& v){
        int s=0;
        int e=v.size()-1;
        while(s<=e){
            int mid=s+(e-s)/2;
            if(s==e){
                return s;
            }
            else if(mid+1<v.size() && v[mid]>v[mid+1]){
                return mid;
            }
            else if(mid-1>0 && v[mid]<v[mid-1]){
                return mid-1;
            }
            else if(v[s]>v[mid]){
                e=mid-1;
            }
            else{
                s=mid+1;
            }
        }
        return -1;
    }
    int binary(vector<int>& vec,int s,int e, int target){
    
        while(s<=e){
            int mid=s+(e-s)/2;
            if(vec[mid]==target){
                return mid;
            }
            else if(vec[mid]>target){
                e=mid-1;
            }
            else{
                s=mid+1;
            }
        }
        return -1;
    }
    
    int search(vector<int>& nums, int target) {
        int pivotInd=pivot(nums);
        int n=nums.size();
        int ans=-1;
        if(target>=nums[0] && target<=nums[pivotInd]){
            ans=binary(nums,0,pivotInd,target);
        }
        else{
            ans=binary(nums,pivotInd+1,n-1,target);
        }
        return ans;
    }
    
};