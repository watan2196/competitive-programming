#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long
#define ONLINE_JUDGE

const int N=1e5+5;
const int mod=1e9+7;

int i,j,n,cnt,res,m,l,r,t,ans,mid;
vector<int>a;

// Given a rotated sorted array of integers that is shifted by some values ,find the smallest element.



int small_rotated(const vector<int> &a);
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
	   
	   
	   res=small_rotated(a);
	   if(res!=-1)
	   cout<<a[res]<<endl;
	   
	   




	return 0;
}


int small_rotated(const vector<int> &a)
{
	
	l=0;r=a.size()-1;
	n=a.size();
	ans=-1;
	while(l<=r)
	{
		mid=l+floor((r-l)/2);
		if(a[mid]<a[n-1])
		{
			ans=mid;
			r=mid-1;
		}
		else
		l=mid+1;
	}
	return ans;
}

