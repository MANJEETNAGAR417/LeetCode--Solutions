class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        int K=k%n;
        if(n==1 || K==0)return;
        vector<int>temp;
        for(int i=n-K;i<n;i++){
            temp.push_back(nums[i]);
        }
        for(int i=0;i<n-K;i++){
            temp.push_back(nums[i]);
        }
        for(int i=0;i<n;i++){
            nums[i]=temp[i];
        }
    }
};