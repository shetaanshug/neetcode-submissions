class Solution {
public:
bool bs(int start,int end,int target,vector<vector<int>>& matrix,int n){

if(start>end) return false;
   int  mid = (start+end)/2;
    

    int row = mid/n;
    int col = mid%n;
    if(matrix[row][col]==target) return true;
    else if(matrix[row][col]>target) return bs(start,mid-1,target,matrix,n);
    else return bs(mid+1,end, target, matrix,n);
    return false;



}
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
       int m = matrix[0].size();
        int n = matrix.size();
        
        return bs(0,m*n-1,target,matrix,m);

    }
};
