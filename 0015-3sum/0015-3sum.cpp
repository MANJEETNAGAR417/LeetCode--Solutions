class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i=0;
        vector<vector<int>>st;
        while(i<nums.size()){
            if(i>0 && nums[i]==nums[i-1]){
                i++;
                continue;
            }
            int j=i+1;
            int k=nums.size()-1;
            while(j<k){
                int sum=nums[i]+nums[j]+nums[k];
                if(sum>0){
                    k--;
                }
                else if(sum==0){
                    vector<int>res={nums[i],nums[j],nums[k]};
                    st.push_back(res);
                    j++;
                    k--;
                    while(j<k && nums[j]==nums[j-1])j++;
                    while(j<k && nums[k]==nums[k+1])k--;
                }
                else{
                    j++;
                }
            }
            i++;
            
        }
        return st;
    }
};