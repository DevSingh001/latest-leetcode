class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> v;
        int j=n;
        for(int i=0;i<n;i++){
            while(j<nums.size()){
                v.push_back(nums[i]);
                v.push_back(nums[j]);
                j++;
                break;
            }
        }
        return v;
    }
};