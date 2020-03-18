//greedy algorithm for minimum no.of coins to form target sum of money
#include <bits/stdc++.h>
using namespace std;
using ll  = long long int;
#define ONLINE_JUDGE
const ll mod = 1e9+7;
ll i,n,j,t,s,mn;
 	 int main()
     {
      #ifndef ONLINE_JUDGE
       freopen("qns.txt","r",stdin);
       freopen("ans.txt","w",stdout);
      #endif
          ios::sync_with_stdio(false);
          cin.tie(NULL);
             // logic
			 //given a set of coin values{1,2,5,10,50,100,200}
			 // target sum=520
			 cin>>n>>t;
			 vector<ll>v;
			 v.resize(n);
			 
			 for(i=0;i<n;i++)
			 cin>>v[i];
			 
			 sort(v.rbegin(),v.rend());
			 s=0;
			 
			 for(i=0;i<v.size();i++)
			 cout<<v[i]<<" ";
			 
			 i=0;
			 while(s<=t && i<n)	 
			 {
			 	if((s+v[i])<=t)
			 	  {
				   s+=v[i];
			 	  mn++;
			      }
			 	 else
			 	 i++;
			 }
			 
			 cout<<mn<<endl;


         return 0;
     }

