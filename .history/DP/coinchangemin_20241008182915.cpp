class Solution{
#define s 10001
	public:

//Memoized
	int solve(int c[], int n, int sum, int t[][s])
	{
	    if(sum==0)
	    return 0;
	    
	    if(n==0)
	    return INT_MAX-1;
	    
	    if(t[n][sum]!=-1)
	    return t[n][sum];
	    
	    if(c[n-1]<=sum)
	    return t[n][sum] = min(1+solve(c,n,sum-c[n-1], t), solve(c,n-1,sum, t));
	    
	    else
	    return t[n][sum] = solve(c,n-1,sum, t);
	    
	}
	
//Tabular
	int minCoins(int c[], int n, int V) 
	{ 
	    int t[n+1][V+1];
	    
	    t[0][0] = 0;
	    
	    for(int i=1;i<n+1;i++)
	    t[i][0] = 0;
	    
	    for(int j=1;j<V+1;j++)
	    t[0][j] = INT_MAX-1;
	    
	    for(int i=1;i<n+1;i++)
	    {
	        for(int j=1;j<V+1;j++)
	        {
	            if(c[i-1]<=j)
	            t[i][j] = min(1+t[i][j-c[i-1]],t[i-1][j]);
	            
	            else
	            t[i][j] = t[i-1][j];
	            
	        }
	    }
	   
	    int ans;
	    t[n][V] == INT_MAX-1 ? ans = -1 : ans = t[n][V];
	    return ans;
	} 
	  
};
