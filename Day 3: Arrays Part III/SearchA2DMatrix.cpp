class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m,n;
        m = matrix.size();
        n = matrix[0].size();
        int middle;
        int low = 0;
        int high = (m*n)-1;
        while(low<=high)
        {
            middle = (low+high)/2;
            if(matrix[middle/n][middle%n]>target)
            {
                high = middle -1;
            }
            else if(matrix[middle/n][middle%n]<target)
            {
                low = middle + 1;
            }
            else if(matrix[middle/n][middle%n]==target)
            {
                return true;
            }
        }
        return false;
    }
};
