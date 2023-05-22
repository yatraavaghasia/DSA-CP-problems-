class Solution {
  public:
    void printNos(int N) {
        // code here
        if(N>0)
        {
            cout<<N<<" ";
            printNos(N-1);
        }
        return;
    }
};
