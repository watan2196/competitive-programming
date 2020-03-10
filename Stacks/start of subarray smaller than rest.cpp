#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long
#define ONLINE_JUDGE
//Given an array find the count of no of subarrays whose starting element is smaller than the rest in the subarray.
// bruteforce o(n2) would be to generate all subarrays and check if the above conditions holds true and increment the count
const int N=1e5+5;
const int mod=1e9+7;
// O(n) approach is to use a ascending ordered stack .
int i,j,n,cnt,res,m,t;
vector<int>a;
stack<int>st;
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
	   
	   st.push(a[0]);
	   
	   i=1;cnt=0;
	   while(i<a.size())
	   {
	   	if(a[i] > st.top())
           {
	   		cnt+=st.size();
	   		st.push(a[i]);
	   		i++;
		   }
		   else
		   {
		   	st.pop();
		   }
	   }
	   cout<<cnt+a.size()<<endl;

	return 0;
}

