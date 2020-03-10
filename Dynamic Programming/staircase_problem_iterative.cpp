#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long
#define ONLINE_JUDGE
// stair-case problem
const int N=1e5+5;
const int mod=1e9+7;

int i,j,n,cnt,res,m,t;
vector<int>dp;
int32_t main()
{
	#ifndef ONLINE_JUDGE
       freopen("qns.txt","r",stdin);
       freopen("ans.txt","w",stdout);
    #endif
       IOS;
	   
	   cin>>n;
	   
	   dp.resize(n+1);
	   
	   dp[0]=1;
	   dp[1]=1;

	   
	   for(i=2;i<=n;i++)
	   dp[i]=dp[i-1] + dp[i-2];

	   cout<<dp[n]<<endl;

	return 0;
}

