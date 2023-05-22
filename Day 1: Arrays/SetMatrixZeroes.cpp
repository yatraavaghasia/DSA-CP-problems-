class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n,m;
        n = matrix.size();
        m = matrix[0].size();
        int col0 = 1;
        for(int i=0; i<n ; i++)
        {
            for(int j=0;j<m;j++)
            {
                if(matrix[i][j]==0)
                {
                    if(j!=0)
                    {
                        matrix[i][0]=0;
                        matrix[0][j]=0;
                    }
                    else if(j==0)
                    {
                        col0 = 0;
                    }

                }
            }
        }
        for(int i=1;i<n;i++)
        {
            for(int j=1;j<m;j++)
            {
                if(matrix[i][j]!=0)
                {
                    if(matrix[i][0]==0 || matrix[0][j]==0)
                    {
                        matrix[i][j]=0;
                    }
                }
            }
        }
        if(matrix[0][0]==0)
        {
            for(int j=0;j<m;j++)
            {
                matrix[0][j]=0;
            }
        }
        if(col0==0)
        {
            for(int i=0;i<n;i++)
            {
                matrix[i][0]=0;
            }
        }
        for(int i=0;i<n;i++)
        {
            cout<<"[";
            for(int j=0;j<m;j++)
            {
                if(j!=m-1)
                cout<<matrix[i][j]<<",";
                else
                cout<<matrix[i][j];
            }
            if(i!=n-1)
            cout<<"],";
            else
            cout<<"]";
        }
    }
};
