#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long
#define ONLINE_JUDGE

const int N=1e5+5;
const int mod=1e9+7;
// find the minimum element in a given rotated sorted array 
// method 1: find the mid element and comapre it with a[n-1] , if a[mid]<a[n-1] ans=mid,high=mid-1 else l01=mid+1
int i,j,n,cnt,res,m,t,ans,l,h,mid;

vector<int>A;

int min_rotated(const vector<int> &A);

int32_t main()
{
	#ifndef ONLINE_JUDGE
       freopen("qns.txt","r",stdin);
       freopen("ans.txt","w",stdout);
    #endif
       IOS;

	   cin>>n;
	   A.resize(n);
	   
	   for(i=0;i<n;i++)
	   cin>>A[i];
	   
	   res=min_rotated(A);

	   cout<<A[res]<<endl;

	return 0;
}
int min_rotated(const vector<int> &A)
{
	
	l=0;h=A.size()-1;
	n=A.size();
	ans=-1;
	while(l<=h)
	{
		mid=l+floor((h-l)/2);
		
		if(A[mid]<=A[n-1])
		{
			ans=mid;
			h=mid-1;
		}
		else
		l=mid+1;
	}
	return ans;
}
