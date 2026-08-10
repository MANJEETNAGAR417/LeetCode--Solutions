class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int low=0,n=nums.size(),high=n-1;
        int st=-1,end=-1;
        while(low<=high){

            int mid=(low+high)/2;
            if(nums[mid]>=target){
                if(nums[mid]==target){st=mid;}
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        low=0;high=n-1;
        while(low<=high){

            int mid=(low+high)/2;
            if(nums[mid]<=target){
                if(nums[mid]==target){end=mid;}
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return {st,end};
        
    }
};