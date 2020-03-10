#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long
#define ONLINE_JUDGE
// 	Given N bricks what is the maximum height of the staircase that can be build...
// Sometimes binary search can also be applied on the range of min to max of our 
//  answer, even if there is no collection of elements..so if we have N bricks, the staircase height will lie
// in the range  0<height<N so we need to binary search on this range and compute the mid value height and compare ...  
const int N=1e5+5;
const int mod=1e9+7;

int i,j,n,cnt,res,t,nb,l,h,mid,ans;
int max_height_staircase(int n);
int32_t main()
{
	#ifndef ONLINE_JUDGE
       freopen("qns.txt","r",stdin);
       freopen("ans.txt","w",stdout);
    #endif
       IOS;

	   cin>>n;
	   
	   res=max_height_staircase(n);

	   cout<<res<<endl;
	return 0;
}
int max_height_staircase(int n)
{
	
	l=0;h=n;
	ans=-1;
	while(l<=h)
	{
		mid=l+floor((h-l)/2);
		
		nb=mid*(mid+1)/2;
		if(nb<=n)
		{
			ans=mid;
			l=mid+1;
		}
		else
		h=mid-1;
	}
	return ans;
}
