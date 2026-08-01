class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int>st;
        unordered_map<int,int>mpp;
        for(int i=nums2.size()-1;i>=0;i--){
            while(!st.empty() && nums2[i]>st.top()){
                st.pop();
            }
            if(st.empty())mpp[nums2[i]]=-1;
            else{
                if(nums2[i]<st.top())mpp[nums2[i]]=st.top();
                else mpp[nums2[i]]=-1;
            }
            st.push(nums2[i]);
        }
        vector<int>temp;
        for(auto it: nums1){
            temp.push_back(mpp[it]);
        }
        return temp;
    }
};