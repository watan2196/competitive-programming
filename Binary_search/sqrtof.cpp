#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long
#define ONLINE_JUDGE

const int N=1e5+5;
const int mod=1e9+7;

// square root of x using binary search ,use of sqrt function not allowed

int i,j,n,cnt,res,m,t,l,h,mid,ans;
int sqrtof(int n);
int32_t main()
{
	#ifndef ONLINE_JUDGE
       freopen("qns.txt","r",stdin);
       freopen("ans.txt","w",stdout);
    #endif
       IOS;


	   cin>>n;
	   
	   res=sqrtof(n);
	   
	   cout<<res<<endl;





	return 0;
}

int sqrtof(int n)
{
	l=0;h=n;
	ans=-1;
	while(l<=h)
	{
		mid=l+floor((h-l)/2);
		
		if((long long)mid*mid <=n)
		{
			ans=mid;
			l=mid+1;
		}
		else
		h=mid-1;
	}
	return ans;
	
}
