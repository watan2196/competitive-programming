#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long
#define ONLINE_JUDGE

const int N=1e5+5;
const int mod=1e9+7;

// special integer: Given an unsorted array of positive integers , find the max size k of the 
// subarray whose sum is not > greater than x 

int i,j,n,cnt,res,m,t,x,k,l,L,R,h,b,mid,mxk,maxs;


vector<int>a,prefix;

int ispossible(const vector<int> &prefix,int mid);
int maxk(const vector<int> &a,int b);
int32_t main()
{
	#ifndef ONLINE_JUDGE
       freopen("qns.txt","r",stdin);
       freopen("ans.txt","w",stdout);
    #endif
       IOS;

	   cin>>n;
	   a.resize(n);
	   
	   prefix.resize(n+2);
	   
	   for(i=0;i<n;i++)
	   cin>>a[i];

	   cin>>b;

	   res=maxk(a,b);

	   cout<<res<<endl;
	   
	return 0;
}

int maxk(const vector<int> &a,int b)
{

	
	prefix[0]=0;prefix[n+1]=0;
	
	
	for(i=1;i<=a.size();i++)
	prefix[i]=a[i-1]+prefix[i-1];


	l=0;h=a.size()+1;
	
	while((h-l)>1)
	{
		mid=l+floor((h-l)/2);
		
		mxk=ispossible(prefix,mid);
		if(mxk<=b)
		l=mid;
		else
		h=mid;
	}
	return l; 
}


int ispossible(const vector<int> &prefix,int mid)
{
	maxs=0;
	for(i=1;i<=prefix.size()-mid-1;i++)
	{
		L=i;R=L+mid-1;
          if(prefix[R]-prefix[L-1]>maxs)
          maxs=prefix[R]-prefix[L-1];
	}
	

	return maxs;	
	
}
