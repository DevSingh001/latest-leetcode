class Solution {
public:
    int pivot(vector<int>& nums){
        int n=nums.size();
        int s=0;
        int e=n-1;
        while(s<=e){
            int mid=s+(e-s)/2;
            if(s==e){
                return s;
            }
            else if(mid>0 && nums[mid]<nums[mid-1]){
                return mid-1;
            }
            else if(mid+1<n && nums[mid]>nums[mid+1]){
                return mid;
            }
            else if(nums[mid]>=nums[s]){
                s=mid+1;
            }
            else{
                e=mid-1;
            }
        }
        return -1;
    }
    int BinarySearch(vector<int>& nums,int s,int e,int target){
   
        while(s<=e){
            int mid=s+(e-s)/2;
            if(nums[mid]==target){
                return mid;
            }
            else if(target>nums[mid]){
                s=mid+1;
            }
            else{
                e=mid-1;
            }
        }
        return -1;
    }
    int search(vector<int>& nums, int target) {
        int piv=pivot(nums);
        if(target>=nums[0] && target<=nums[piv]){
             return BinarySearch(nums,0,piv,target);
        }
        for(int i=piv+1;i<nums.size();i++){
           return BinarySearch(nums,piv+1,nums.size()-1,target);
        }
        return -1;
    }
};