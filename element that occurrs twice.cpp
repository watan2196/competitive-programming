#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long
#define ONLINE_JUDGE

const int N=1e5+5;
const int mod=1e9+7;
// Given a sorted array of size n ,containing elements from 1 to n-1 
// in which all elements occurs once but on element twice ...
int i,j,n,cnt,res,m,t,l,h,mid,ans;
vector<int>a;
int occurs_twice(const vector<int> &a);
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
	   
	   res=occurs_twice(a);

	   cout<<a[res]<<endl;
	return 0;
}
int occurs_twice(const vector<int> &a)
{
	l=0;h=a.size()-1;
	n=a.size();
	
	while(l<=h)
	{
		mid=l+floor((h-l)/2);
		
		if(a[mid]==a[mid-1] || a[mid]==a[mid+1])
		return mid;
		else if(a[mid]==mid+1)
		l=mid+1;
		else if(a[mid]==mid)
		h=mid-1;
	}
}
