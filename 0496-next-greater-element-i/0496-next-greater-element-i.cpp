class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int>temp;
        for(int i=0;i<nums1.size();i++){
            bool flag=false;
            for(int j=0;j<nums2.size();j++){
                if(nums2[j]==nums1[i]){
                    for(int k=j+1;k<nums2.size();k++){
                        if(nums2[k]>nums2[j]){
                            flag=true;
                            temp.push_back(nums2[k]);
                            break;
                        }
                    }

                }
                if(flag)break;
            }
            if(!flag)temp.push_back(-1);
        }
        return temp;
    }
};