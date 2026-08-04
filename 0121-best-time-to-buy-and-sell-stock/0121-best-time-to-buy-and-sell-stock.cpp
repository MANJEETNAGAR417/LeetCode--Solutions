class Solution {
public:
    int maxProfit(vector<int>& nums) {
        int sp=nums[0],cp=nums[0];
        int maxpft=0;
        for(int i=1;i<nums.size();i++){
            cp=min(cp,nums[i]);
            if(nums[i]>cp)sp=nums[i];
            else sp=cp;
            int pft=sp-cp;
            maxpft=max(pft,maxpft);
        }
        return maxpft;
    }
};