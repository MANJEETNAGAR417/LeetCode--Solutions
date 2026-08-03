class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int l=0,r=0,maxlen=0;
        while(l<nums.size() && nums[l]!=1)l++;
        r=l;
        while(r<nums.size()){
            if(nums[r]==1 && nums[l]==1)maxlen=max(maxlen,r-l+1);
            else{
                l=r;
            }
            r++;
        }
        return maxlen;
    }
};