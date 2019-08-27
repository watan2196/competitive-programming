#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long
#define ONLINE_JUDGE

const int N=1e5+5;
const int mod=1e9+7;

// Given a sorted array of integers find the first and last occurence of a target element...

int i,j,n,cnt,x,res,m,t,l,r;

vector<int>v;

int32_t main()
{
	#ifndef ONLINE_JUDGE
       freopen("qns.txt","r",stdin);
       freopen("ans.txt","w",stdout);
    #endif
       IOS;

	   cin>>n;
	   
	   v.resize(n);
	   
	   for(i=0;i<n;i++)
	   cin>>v[i];
	   
	   cin>>x;
	   cnt=count(v.begin(),v.end(),x);
	   if(cnt>0)
	   {
	   l=lower_bound(v.begin(),v.end(),x)-v.begin();
	   r=l+(cnt-1);
	   }
	   else
	   {
	   	l=-1;
	   	r=-1;
	   }
	   cout<<l<<" "<<r;
	return 0;
}

