#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long
#define ONLINE_JUDGE

const int N=1e5+5;
const int mod=1e9+7;

//Searching in a rotated sorted array...
// lets say original array 1,2,3,4,5,6,7 is  rotated and the array now is 5,6,7,1,2,3 
// my approach is that since the sorted array is rotated the new array
// will follow the pattern of first increasing till the peak element then decreasing.
// so essentially we need to compute the kth index for which ,for all i<k a[i]<a[i-1] and for all i>k+1th a[i]<a[i-1]
// then we need to compare and look for the target element either in the left or right half of the peak value..
int i,j,n,cnt,res,m,t,l,h,mid,x,ans,pk,sol;

vector<int>a;

int find_peak(const vector<int> &a);

int bin_search(const vector<int> &a,int x,int pk);

int32_t main()
{
	#ifndef ONLINE_JUDGE
       freopen("qns.txt","r",stdin);
       freopen("ans.txt","w",stdout);
    #endif
       IOS;
	   cin>>n;
	   a.resize(n);
	   
	   for(i=0;i<a.size();i++)
	   cin>>a[i];
	   
	   
	   cin>>x;
	   
	   pk=find_peak(a);
//	   cout<<pk<<endl;
	   res=bin_search(a,x,pk);
	   
	   cout<<res<<endl;
	   



	return 0;
}
int find_peak(const vector<int> &a)
{
	l=0;h=a.size()-1;
	ans=-1;
	while(l<=h)
	{
		mid=l+floor((h-l)/2);
		
		if(a[mid]>a[0])
		{
			ans=mid;
			l=mid+1;
		}
		else
		h=mid-1;
	}
	return ans;
}


int bin_search(const vector<int> &a,int x,int pk)
{
	sol=-1;
	
	if(x>a[n-1])
	{
		l=0;
		h=pk;
		while(l<=h)
		{
			mid=l+floor((h-l)/2);
			if(a[mid]==x)
			{
			sol=mid;
			break;
			}
			else if(a[mid]>x)
			h=mid-1;
			else
			l=mid+1;
		}
	}
	else if(x<a[0])
	{
		l=pk+1;
		h=n-1;
		
		while(l<=h)
		{
			mid=l+floor((h-l)/2);
			if(a[mid]==x)
			{
			sol=mid;
			break;
			}
			else if(a[mid]>x)
			h=mid-1;
			else
			l=mid+1;
		}
	}
	return sol;
}
