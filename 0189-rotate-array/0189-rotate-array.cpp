class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        int K=k%n;
        if(n==1 || K==0)return;
        reverse(nums.begin(),nums.begin()+n-K);
        reverse(nums.begin()+n-K,nums.end());
        reverse(nums.begin(),nums.end());
    }
};