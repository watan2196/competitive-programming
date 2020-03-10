#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long
#define ONLINE_JUDGE
//Edit distance...
const int N=1e5+5;
const int mod=1e9+7;

int i,j,n,cnt,res,m,t;
string s1,s2;
vector<vector<int>>dp;
int32_t main()
{
	#ifndef ONLINE_JUDGE
       freopen("qns.txt","r",stdin);
       freopen("ans.txt","w",stdout);
    #endif
       IOS;

	   cin>>s1>>s2;
	   m=s1.length();
	   n=s2.length();
	   
	   dp.resize(m+1);
	   for(i=0;i<(m+1);i++)
	   dp[i].resize(n+1);
	   
	   
	   for(i=0;i<=m;i++)
	   {
		   	for(j=0;j<=n;j++)
		   	{
		   		if(i==0)
		   		dp[0][j]=j;
		   		else if(j==0)
		   		dp[i][0]=i;
		   		else
		   		{
		   		if(s1[i-1] == s2[j-1])
				   dp[i][j]=dp[i-1][j-1];
			    else
				   dp[i][j]=min(1+dp[i-1][j-1],min(1+dp[i-1][j],1+dp[i][j-1]));	
			    }
			}
	   }
	   
//	   for(i=0;i<dp.size();i++)
//	   {
//	   for(j=0;j<dp[i].size();j++)
//	   cout<<dp[i][j]<<" ";
//	   cout<<endl;
//	   }
	  cout<<dp[m][n];
	   
	return 0;
}

