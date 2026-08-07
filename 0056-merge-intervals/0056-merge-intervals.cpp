class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        if(intervals.size()==1)return intervals;
        sort(intervals.begin(),intervals.end());
        vector<vector<int>>ans;
        for(int i=1;i<intervals.size();i++){
            if(intervals[i][0]>=intervals[i-1][0] && intervals[i][0]<=intervals[i-1][1]){
                intervals[i][0]=intervals[i-1][0];
                intervals[i][1]=max(intervals[i][1],intervals[i-1][1]);
            }
            
        }
        for(int i=0;i<intervals.size();i++){
            vector<int>res;
            res.push_back(intervals[i][0]);
            int l=i;
            while(l<intervals.size() && intervals[l][0]==intervals[i][0]){
                l++;
            }
            res.push_back(intervals[l-1][1]);
            ans.push_back(res);
            i=l-1;
        }
        return ans;
    }
};