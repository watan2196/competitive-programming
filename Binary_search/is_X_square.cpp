#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long
#define ONLINE_JUDGE

const int N=1e5+5;
const int mod=1e9+7;
// Using Binary Search find if x is a square of an integer, contrained to us e sqrt function1
int i,j,n,cnt,x,res,low,high,mid;
int is_square(int x);
int32_t main()
{
	#ifndef ONLINE_JUDGE
       freopen("qns.txt","r",stdin);
       freopen("ans.txt","w",stdout);
    #endif
       IOS;
       cin>>x;
       res=is_square(x);

	   cout<<res<<endl;


	return 0;
}

int is_square(int x)
{
	low=0;high=x;
	while(low<=high)
	{
		mid=low+floor((high-low)/2);
		
		if(mid*mid == x)
		return mid;
		if(mid*mid < x)
		low=mid+1;
		else
		high=mid-1;
	}
	if(low>high)
	return -1;
}
