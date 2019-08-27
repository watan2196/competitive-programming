#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long
#define ONLINE_JUDGE

const int N=1e5+5;
const int mod=1e9+7;

// Given a sorted array of elements in which all elements except one occurs twice ,find the elemnt that occurs one
// since binary search can be implemented whenever there is some order around the required elemnt in the array ,
// so in this problem if a[mid]!=a[mid+1] and a[mid]!=a[mid+1] return mid however otherwise 
// if the first occurence of a[mid] is even low=mid+1 else high=mid-1

int i,j,n,cnt,res,m,t,l,h,mid;
vector<int>v;

int occurs_once(const vector<int> &v);

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
	   
	   res=occurs_once(v);
	   
	   cout<<v[res]<<endl;


	return 0;
}

int occurs_once(const vector<int> &v)
{
	l=0;h=v.size()-1;
	
	while(l<=h)
	{
		mid=l+floor((h-l)/2);
		
		if(v[mid]!=v[mid+1] && v[mid]!=v[mid-1])
		return mid;
		else if((mid%2==0 && (mid+1)%2!=0 ) || (mid%2!=0 && (mid-1)%2==0))
			l=mid+1;
		else
		    h=mid-1;
		
	}
}
