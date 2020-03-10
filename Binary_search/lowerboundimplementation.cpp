#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long
#define ONLINE_JUDGE

const int N=1e5+5;
const int mod=1e9+7;
// Lower_bound implementation : Given an array of integers find the first element >=X
int i,j,n,cnt,res,m,t,low,high,mid,target,ans;
vector<int>a;
int lowerbound(const vector<int> &a,int target);
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
	   
	   cin>>target;
	   
	   res=lowerbound(a,target);
	   if(res!=-1)
	   cout<<res<<endl;
	   else
	   cout<<res<<endl;
	
	
	return 0;
}
int lowerbound(const vector<int> &a,int target){
	
	low=0;high=a.size()-1;
	ans=-1;
	while(low<=high)
	{
		mid=low+floor((high-low)/2);
		
		if(a[mid]>=target)
		{
			ans=mid;
			high=mid-1;
		}
		else
		low=mid+1;
	}
	cout<<low<<" "<<high<<endl;
	return ans;
}
