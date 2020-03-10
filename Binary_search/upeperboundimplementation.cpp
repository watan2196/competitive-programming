#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long
#define ONLINE_JUDGE

const int N=1e5+5;
const int mod=1e9+7;

int ans,i,j,n,cnt,x,res,m,t,l,r,mid;
// Upperbound implementation of binarysearch : find the first element that is strictly greater than X

vector<int>a;

int upperbound(const vector<int> &a,int x);
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
	   cin>>x;
	   
	   res=upperbound(a,x);
	   
//	   if(res!=-1)
//	   cout<<a[res]<<endl;
//	   else
	   cout<<res<<endl;

	return 0;
}


int upperbound(const vector<int> &a,int x)
{
 l=0;r=a.size()-1;
 ans=-1;

 while(l<=r)
 {
 	
	 mid=l+floor((r-l)/2);
 	
 	if(a[mid]>x)
 	{
 		ans=mid;
 		r=mid-1;
	 }
	 else
	 l=mid+1;
 }
 
 cout<<l<<" "<<r;
	return ans;
}
