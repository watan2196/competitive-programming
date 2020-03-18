#include <bits/stdc++.h>
using namespace std;
using ll =long long int;
#define ONLINE_JUDGE
const ll mod = 1e9+7;

ll i,j,n,cnt,t,x,s;
vector<ll> v;
 	 int main()
     {
      #ifndef ONLINE_JUDGE
       freopen("qns.txt","r",stdin);
       freopen("ans.txt","w",stdout);
      #endif
          ios::sync_with_stdio(false);
          cin.tie(NULL);
             // logic
			 cin>>t;
			 while(t--)
			 {
			 	cin>>n>>x;
			 	v.resize(n);
				 for(i=0;i<n;i++)
				 cin>>v[i];
				 
				 sort(v.begin(),v.end());
				 
				 
				 cnt=0;
				 s=0;
				 i=0;
				 while(s<=x && i<n)	
			    {
			    	if(s+v[i]<=x)
			    	{
					 s+=v[i];
					 cnt++;
					 i++;
				    }
			    	else
			    	i++;
			    }
			    cout<<cnt<<"\n";
			 }
			 
          return 0;
     }


