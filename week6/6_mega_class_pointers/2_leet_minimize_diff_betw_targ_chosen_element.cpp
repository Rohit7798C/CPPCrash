#include<bits/stdc++.h>

using namespace std;

int solve(vector<vector<int>>&mat, int &target,int sum, int row){
    //base case 
    if(row == mat.size()){
        return abs(target - sum);
    }
    int ans = INT_MAX;
    for(int col = 0;col<mat[row].size();col++){
        int reAns = solve(mat,target,sum + mat[row][col], row+1);
        ans = min(ans, reAns);
    }
    return ans;
}

int minimizeTheDiff(vector<vector<int>>&mat, int target){
    int sum = 0, row = 0;
    return solve(mat, target, sum, row);
}

int main(){
    
    return 0;
}