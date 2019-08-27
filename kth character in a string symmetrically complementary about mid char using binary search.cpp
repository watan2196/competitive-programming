#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long
#define ONLINE_JUDGE

const int N=1e5+5;
const int mod=1e9+7;



// Given a string of length n that belongs to a family of strings defined as S0='0' and Si=Si-1.'0'.!(Si-1)
// eg S1=001 and s2=00101100  =>       0
//									  / \
//									 0	 1
//									/ \  /\
//								   0  1 1  0
//
int i,j,n,cnt,l,h,mid,m,k,t;

string s;
int ans=0;
int res;
int kth(string s,int ans,int k);
int32_t main()
{
	#ifndef ONLINE_JUDGE
       freopen("qns.txt","r",stdin);
       freopen("ans.txt","w",stdout);
    #endif
       IOS;

	   cin>>s>>k;
	   
	   res=kth(s,ans,k);

	   cout<<res<<endl;

	return 0;
}
int kth(string s,int ans,int k)
{
	l=0;h=s.length()-1;
	
	while(l<=h)
	{
		mid=l+floor((h-l)/2);
		
		if(k==mid)
		return ans;
		else if(k>mid)
		{
			l=mid+1;
			ans=!ans;
		}
		else
		h=mid-1;
	}
}
