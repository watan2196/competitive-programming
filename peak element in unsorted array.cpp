#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long
#define ONLINE_JUDGE

const int N=1e5+5;
const int mod=1e9+7;
// find the peak element in a given unsorted array eg. 10,20,15,2,23,90,67 
//  we can return any one of 20 or 90 
// key observations 1. if array is sorted in ascending order 1,2,3,4 
// the n-1th is a peak element similarly if sorted in descending order 4,3,2,1 then a[0]th is a peak
// another important observation is that if a[mid]<a[mid-1] then 
// we need to look for the peak element in the left subpart since 
//there will be atleast one peak value to the left for sure however to the right may or may not be 

int i,j,n,cnt,res,m,t,l,h,mid;
vector<int>a;


int peak(const vector<int> &a);
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
	   
	   res=peak(a);

	   cout<<res<<endl;
	   cout<<a[res]<<endl;
	return 0;
}

int peak(const vector<int> &a)
{
 	l=0;h=a.size()-1;
 	while(l<=h)
 	{
 		mid=l+floor((h-l)/2);
 		
 		
 		if(mid==0 && a[mid]>=a[mid+1])
		 return mid;
		 else if(mid== (a.size()-1)  && a[mid]>=a[mid-1])
		 return mid;
		 else if(a[mid]>a[mid-1] && a[mid]>a[mid+1])
 		 return mid;
 		 else
 		 h=mid-1;
	 }
}
