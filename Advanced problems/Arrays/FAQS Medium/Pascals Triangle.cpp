//Given an integer numRows return the first numRows rows of Pascal's triangle.
//In Pascal's triangle:
//The first row has one element with a value of 1.
//Each row has one more element in it than its previous row.
//The value of each element is equal to the sum of the elements directly above it when arranged in a triangle format.

//Input: numRows = 4
//Output: [[1], [1, 1], [1, 2, 1], [1, 3, 3, 1]]
//Explanation: 1st Row has its value set to 1.
//All other cells take their value as the sum of the values directly above them

#include<bits/stdc++.h>
using namespace std;

class Solution{
    private:
    vector<int>generateRow(int row){
        vector<int>ansRow;
        long long ans=1;
        ansRow.push_back(ans);
        for(int c=1;c<row;c++){
            ans=ans*(row-c);
            ans=ans/c;
            ansRow.push_back(ans);
        }
        return ansRow;
    }
    public:
    vector<vector<int>> pascalTriangle(int numRows) {
        vector<vector<int>>result;
        for(int i=1;i<=numRows;i++){
            result.push_back(generateRow(i));
        }
        return result;
    }
};

int main(){
    Solution sol;
    int numRows=4;
    vector<vector<int>>PascalT=sol.pascalTriangle(numRows);
    for(auto &row:PascalT){
        for(auto &element:row){
            cout<<element<<" ";
        }
    }
    return 0;
}