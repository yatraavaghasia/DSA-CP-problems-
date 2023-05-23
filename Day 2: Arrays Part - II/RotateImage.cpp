class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
         for (int i = 0; i < n; i++) {
    for (int j = 0; j < i; j++) {
      swap(matrix[i][j], matrix[j][i]);
    }
  }
        int i,j, k;
        for(i=0;i<n;i++)
        {
            reverse(matrix[i].begin(),matrix[i].end());
        }
        cout << "[";
        for(i=0;i<n;i++)
        {
            cout<<"[";
            for(j=0;j<n;j++)
            {
                cout << matrix[i][j] << ",";
            }
            cout<<"],";
        }
        cout<<"]";
    }
};
