#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long
#define ONLINE_JUDGE

const int N=1e5+5;
const int mod=1e9+7;

int i,j,n,cnt,res,m,t,a,b;

int32_t main()
{
	#ifndef ONLINE_JUDGE
       freopen("qns.txt","r",stdin);
       freopen("ans.txt","w",stdout);
    #endif
       IOS;
       int q;
		cin>>n>>q;
		vector<int>arr(n+1);
		for(int i=0;i<n;i++)
		{
			cin>>arr[i+1];
			arr[i+1]+=arr[i];
		}
	
		while(q--)
		{
			int l,r;
			cin>>l>>r;
			cout<<arr[r]-arr[l-1]<<endl;
		}
	return 0;
}

