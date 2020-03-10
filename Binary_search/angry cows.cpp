#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long
#define ONLINE_JUDGE

const int N=1e5+5;
const int mod=1e9+7;

//Given n (n>=2) stalls located at coordinated across x-axis given in an array P[], 
// and there are c (c>=2) cows to be placed in n stalls ,however 2 cows located close to each other tend to fight
// thus maximize the minimum distance between c cows . 

int i,j,n,cnt,res,m,t,c,l,h,mid,mn,p;

vector<int>a;
int mindist(const vector<int> &a,int c);
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
	   
	   cin>>c;
	   
	   res=mindist(a,c);
	   
	   cout<<res<<endl;
	   
	return 0;
}

int mindist(const vector<int> &a,int c)
{
	mn=1e5;
	for(i=0;i<a.size()-1;i++)
	{
		if(a[i+1]-a[i]<mn)
		mn=a[i+1]-a[i];
	}
	
	l=mn;
	h=a[a.size()-1]-a[0]+1;
	
	
	while((h-l)>1)
	{
		mid=l+floor((h-l)/2);
		
		cnt=1;
		p=a[0];
		while(cnt<c)
		{
		if(lower_bound(a.begin(),a.end(),p+mid)!=a.end())
		{
			p=a[lower_bound(a.begin(),a.end(),p+mid)-a.begin()];
			cnt++;
		}
		else
		break;
		}
		if(cnt==c)
		l=mid;
		else
		h=mid;
	}
	return l;
}
