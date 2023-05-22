//User function template for C++
class Solution{
public:	
	
	
	int isPalindrome(string S)
	{
	    // Your code goes here
	    int i,j;
	    j=S.length()-1;
	    for(i=0;i<(S.length())/2;i++)
	    {
	        if(S[i]!=S[j])
	        {
	           return 0; 
	        }
	        j--;
	    }
	    return 1;
	}

};
