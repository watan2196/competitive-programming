#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long
#define ONLINE_JUDGE
//LIS
const int N=1e5+5;
const int mod=1e9+7;

int i,j,n,cnt,res,m,t;
vector<int>dp;
vector<int>a;
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
	   
	   //dp[k] denotes the LIS ending at index k

	   dp.resize(n);
	   dp[0]=1;  // 6 2 5 1 7 4 8 3
	   
	   
	   for(int k=0;k<n;k++)
	   {
	     dp[k]=1;
		   	for(i=0;i<k;i++)
		   	{
				if(a[i]<a[k])
				{
					dp[k]=max(dp[k],1+dp[i]);
				}
			}
	   }
	   
	   cout<<*max_element(dp.begin(),dp.end());
	   
	return 0;
}

