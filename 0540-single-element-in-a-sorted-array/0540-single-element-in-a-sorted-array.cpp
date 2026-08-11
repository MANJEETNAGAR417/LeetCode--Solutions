class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int low=0;
        int high=nums.size()-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(mid>0 && nums[mid-1]==nums[mid]){
                if((mid-low+1)%2==1)high=mid-2;
                else low=mid+1;
            }
            else if(mid<nums.size()-1 && nums[mid+1]==nums[mid]){
                if((mid-low+1)%2==1)low=mid+2;
                else high=mid-1;
            }
            else return nums[mid];
        }
        return -1;
    }
};