//Slightly different than rotate matrix
//in this the number of rows and columns are different
//Input: matrix = [[1,2,3],[4,5,6]]
//Output: [[1,4],[2,5],[3,6]]

#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix){
        int rows=matrix.size();
        int cols=matrix[0].size();
        vector<vector<int>>ans(cols,vector<int>(rows,0));
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                ans[j][i]=matrix[i][j];
            }
        }
        return ans;
    }
};

int main(){
    Solution sol;
    vector<vector<int>>nums={{1,2,3},{4,5,6}};
    vector<vector<int>>ans=sol.transpose(nums);
    int n=ans.size();
    int m=ans[0].size();
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}