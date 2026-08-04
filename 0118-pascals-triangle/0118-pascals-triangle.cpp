class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>ans(numRows);
        for(int i=0;i<numRows;i++){
            vector<int>res(i+1);
            for(int j=0;j<=i;j++){
                if(i>1 && j>=1 && j<ans[i-1].size()){
                    res[j]=ans[i-1][j-1]+ans[i-1][j];
                }
                else res[j]=1;
            }
            ans[i]=res;
        }
        return ans;
    }
};