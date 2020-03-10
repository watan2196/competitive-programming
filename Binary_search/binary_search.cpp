#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long
#define ONLINE_JUDGE

const int N=1e5+5;
const int mod=1e9+7;

// Binary search implementation

int i,j,n,res,cnt,target,mid,low,high;
vector<int>a;
int binary_search(const vector<int> &a,int target);
int32_t main()
{
	#ifndef ONLINE_JUDGE
       freopen("qns.txt","r",stdin);
       freopen("ans.txt","w",stdout);
    #endif
       IOS;
	   cin>>n>>target;
	      a.resize(n);
	   for(i=0;i<a.size();i++)
	   cin>>a[i];
	   sort(a.begin(),a.end());
	   
	   res=binary_search(a,target);

	   cout<<res<<endl;

	return 0;
}


int binary_search(const vector<int> &a,int target)
{
	
	
	
	
	
	low=0;high=a.size()-1;
	
	while(low<=high)
	{
		mid=low+(high-low)/2;
		
		if(a[mid]==target)
		{
			return mid;
		}
		if(a[mid]>target)
		{
			high=mid-1;
		}
		else
		low=mid+1;
	}
	if(low>high)
	return -1;
}
