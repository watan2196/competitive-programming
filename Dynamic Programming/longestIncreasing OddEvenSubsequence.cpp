#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long
#define ONLINE_JUDGE
// longest odd-even increasing subsequence
const int N=1e5+5;
const int mod=1e9+7;

int i,j,n,cnt,res,m,t;
vector<int>a,dp;
int32_t main()
{
	#ifndef ONLINE_JUDGE
       freopen("qns.txt","r",stdin);
       freopen("ans.txt","w",stdout);
    #endif
       IOS;

	   cin>>n;
	   a.resize(n);
	   
	   for(i=0;i<n;i++)
	   cin>>a[i];
	   
	   dp.resize(n);
	   
	   for(i=0;i<n;i++)
	   {
		   	dp[i]=1;
		   	for(j=0;j<i;j++)
		   	{
		   		if(a[i] > a[j] && (a[i] + a[j] %2 !=0) && (dp[i] < 1+ dp[j]))
		   		dp[i]=1+ dp[j];
		    }
	   }

	   cout<<*max_element(dp.begin(),dp.end());
	return 0;
}

