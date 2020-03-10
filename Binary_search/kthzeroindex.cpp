#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long
#define ONLINE_JUDGE

const int N=1e5+5;
const int mod=1e9+7;
// find the index k of separation for an array having 0's upto kth index and all 1's from k+1 th index 
int i,j,n,cnt,res,m,t,ans,l,r,mid;
vector<int>v;
int kzero(const vector<int> &v);
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
	   
	   
	   res=kzero(v);

	   cout<<res<<endl;

	return 0;
}
 int kzero(const vector<int> &v)
 {
 	l=0;r=v.size()-1;
 	ans=-1;
 	while(l<=r)
 	{
 		mid=l+floor((r-l)/2);
 		
 		if(v[mid]==0)
 		{
 			ans=mid;
 			l=mid+1;
		 }
		 else
		 r=mid-1;
	 }
 	return ans;
 }
