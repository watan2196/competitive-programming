#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long
#define ONLINE_JUDGE

const int N=1e5+5;
const int mod=1e9+7;

int i,j,n,cnt,res,m,t,ans,l,r,mid;
//find the max element in an array in the order of first increasing then decreasing
// 2 4 6 8 12 10 9 7
vector<int>a;

int maxid(const vector<int> &a);
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
	   
	   res=maxid(a);
	   
	   if(res!=-1)
	   cout<<a[res]<<endl;


	return 0;
}
int maxid(const vector<int> &a)
{
	l=0;r=a.size()-1;
	ans=-1;
	while(l<=r)
	{
		mid=l+floor((r-l)/2);
		
		if(a[mid]>a[mid-1]  || m==0)
		{
			ans=mid;
			l=mid+1;
		}
		else
		r=mid-1;
	}
	return ans;
}
