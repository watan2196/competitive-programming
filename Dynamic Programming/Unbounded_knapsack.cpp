#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long
#define ONLINE_JUDGE
// unbounded Knapsack(item can be included INF times) DP solution (bottom-up)
const int N=1e5+5;
const int mod=1e9+7;

int i,j,n,cnt,res,m,mxwt,t;
vector<int>val,wt;
vector<vector<int>>dp;
int32_t main()
{
	#ifndef ONLINE_JUDGE
       freopen("qns.txt","r",stdin);
       freopen("ans.txt","w",stdout);
    #endif
       IOS;
	   dp.clear();
	   cin>>n;
	   val.resize(n);wt.resize(n);
	   for(i=0;i<n;i++)
	   cin>>val[i];
	   for(j=0;j<n;j++)
	   cin>>wt[j];
	   
	   cin>>mxwt;
	   
	   m=mxwt+1;
	   
	   dp.resize(n);
	   for(i=0;i<n;i++)
	   dp[i].resize(m);
	   
	   
	   for(i=0;i<n;i++)
	   {
		   	for(j=0;j<=mxwt;j++)
		   	{
		   		if(wt[i] <= j)
		   		{
		   			if(i==0)
		   			dp[i][j]=val[i];
		   			else
		   			dp[i][j]=max(dp[i-1][j],val[i] + dp[i][j-wt[i]]);
			    }
			    else
			    {
			    	if(i==0)
			    	dp[i][j]=0;
			    	else
			    	dp[i][j]=dp[i-1][j];
				}
	        }
	   }

	   cout<<dp[n-1][m-1]<<endl;
	return 0;
}

