//Given an N * N 2D integer matrix, rotate the matrix by 90 degrees clockwise.
//The rotation must be done in place, meaning the input 2D matrix must be modified directly.

#include<bits/stdc++.h>
using namespace std;

//Input: matrix = [[1, 2, 3], [4, 5, 6], [7, 8, 9]]
//Output: matrix = [[7, 4, 1], [8, 5, 2], [9, 6, 3]]

class Solution{
    public:
    void rotateMatrix(vector<vector<int>>& matrix) {
        int n=matrix.size();
        //Transposing the matrix and then reversing it
        //Doing only the upper triangle since when we swap
        //the lower triangle will also change anyway
        for(int i=0;i<n;i++){
            for(int j=0;j<i+1;j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        //Reversing the matrix
        for(int i=0;i<n;i++){
            reverse(matrix[i].begin(),matrix[i].end());
        }
    }
};


int main(){
    Solution sol;
    vector<vector<int>>matrix={
    {1, 1, 2}, 
    {5, 3, 1}, 
    {5, 3, 5}};
    int n=matrix.size();
    sol.rotateMatrix(matrix);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}