#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long
#define ONLINE_JUDGE

const int N=1e5+5;
const int mod=1e9+7;

//		Find the first occurence of an element x in an array (binary_search)

int i,j,n,cnt,res,m,t,ans,l,x,h,mid;

vector<int>a;

int first_occurence(const vector<int> &a,int x);
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
	   
	   res=first_occurence(a,x);
	   
	   cout<<res<<endl;



	return 0;
}
int first_occurence(const vector<int> &a,int x)
{
	l=0;h=a.size()-1;
	
	ans=-1;
	while(l<=h)
	{
		mid=l+floor((h-l)/2);
		
		if(a[mid]>=x)
		{
			ans=mid;
			h=mid-1;
		}
		else
		l=mid+1;
	}
	return ans;
}
