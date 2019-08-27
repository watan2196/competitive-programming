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

int i,j,n,cnt,res,m,t,x,k,l,l1,r1,h,mid,mx,flag;


vector<int>a,prefix;

int ispossible(const vector<int> &prefix,int mid,int x);
int maxk(const vector<int> &a,int x);
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

	   res=maxk(a,x);


	return 0;
}

int maxk(const vector<int> &a,int x)
{
	//compute the prefix-sum array
	
	prefix[0]=a[0];
	for(i=1;i<a.size();i++)
	prefix[i]=a[i]+prefix[i-1];

	
	
	l=0;h=a.size();
	
	while((h-l)>1)
	{
		mid=l+floor((h-l)/2);
		
		if(ispossible(prefix,mid,x))
		l=mid;
		else
		h=mid;
	}
	return l; 
}


int ispossible(const vector<int> &prefix,int mid,int x)
{
	flag=0;
	for(i=0;i<prefix.size()-mid+1;i++)
	{
		l1=i;r1=l1+mid-1;
		if(l1==0)
		{
			if(prefix[r1]<=x)
			flag=1;
			else
			{
				flag=0;
				break;
				}	
		}
		else
		{
			if(prefix[r1]-prefix[l1-1]<=x)
			{
				flag=1;
			}
			else
			{
				flag=0;
				break;
			}
		}
	}
	
	return flag;
}
