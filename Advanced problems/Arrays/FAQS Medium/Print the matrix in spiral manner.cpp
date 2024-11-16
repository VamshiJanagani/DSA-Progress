//Given an M * N matrix, print the elements in a clockwise spiral 
//manner. Return an array with the elements in the order of their
// appearance when printed in a spiral manner.
//Input: matrix = [[1, 2, 3], [4 ,5 ,6], [7, 8, 9]]
//Output: [1, 2, 3, 6, 9, 8, 7, 4, 5]
//Explanation: The elements in the spiral order are 1, 2, 3 -> 6, 9 -> 8, 7 -> 4, 5

#include<bits/stdc++.h>
using namespace std;


class Solution{
    public:
    vector<int> spiralOrder(vector<vector<int>>& matrix){
        int n=matrix.size(); //rows
        int m=matrix[0].size(); //columns

        int top=0,left=0,right=m-1,bottom=n-1;
        vector<int>ans;

        while(top<=bottom && left<=right){
            
            //going from left to right 
            for(int i=left;i<=right;i++){
                ans.push_back(matrix[top][i]); //top(row) constant, i changes(column(moving from left to right))
            }
            top++;

            //going from top to bottom
            for(int i=top;i<=bottom;i++){
                ans.push_back(matrix[i][right]); //right (column will be constant , i changes ( row (top to bottom)))
            }
            right--;

            //going from right to left
            if(top<=bottom){
            for(int i=right;i>=left;i--){
                ans.push_back(matrix[bottom][i]); //bottom(row) is constant, i changes from right to left
            }
            bottom--;
            }

            //going from bottom to top
            if(left<=right){
                for(int i=bottom;i>=top;i--){
                    ans.push_back(matrix[i][left]);
                }
                left++;
            }
        }
        return ans;
    }
};


int main(){
    Solution sol;
    vector<vector<int>>matrix={{1,2,3},{4,5,6},{7,8,9}};
    vector<int>result=sol.spiralOrder(matrix);
    for(int i=0;i<result.size();i++){
        cout<<result[i]<<" ";
    }
    return 0;
}