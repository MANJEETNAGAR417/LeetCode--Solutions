class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int st=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                st=i;
                break;
            }
        }
        int pt=st+1;
        while(pt<nums.size() && st<=pt){
            if(nums[pt]!=0 && nums[st]==0){
                nums[st]=nums[pt];
                nums[pt]=0;
                st++;
            }
            pt++;
        }
        
    }
};