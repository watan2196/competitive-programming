#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long
#define ONLINE_JUDGE

const int N=1e5+5;
const int mod=1e9+7;
// Median of the matrix of odd order 
//		1 3 5
//		2 6 9
//		3 6 9

int i,j,n,cnt,res,m,t,l,h,mid;

vector<vector<int> >v;
void matrix_median(const vector<vector<int> > &v);
int32_t main()
{
	#ifndef ONLINE_JUDGE
       freopen("qns.txt","r",stdin);
       freopen("ans.txt","w",stdout);
    #endif
       IOS;

	   cin>>n>>m;
	   
	   v.resize(n);
	   for(i=0;i<n;i++)
	   v[i].resize(m);
	   
	   
	   for(i=0;i<n;i++)
	   {
	   for(j=0;j<m;j++)
	    cin>>v[i][j];
     	}
	    
	 	matrix_median(v);
	 	
	 	cout<<res<<endl;
	 
	    


	return 0;
}

void matrix_median(const vector<vector<int> > &v)
{
	l=1e5;h=-1;
	for(i=0;i<n;i++)
	{
	if(v[i][0]<l)
	 l=v[i][0];
	 }
	 
	 
 	for(i=0;i<n;i++)
	{
	if(v[i][m-1]>h)
	 h=v[i][m-1];
	 }
	 
	 
	 while(l<=h)
	 {
	 	mid=l+floor((h-l)/2);
	 	
	 	
	 }
	 
	 
	 
}
