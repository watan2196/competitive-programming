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

int i,j,n,cnt,res,m,t,l,h,mid,cols,g,sm,L,R,med,ans,l1,h1,l2,h2,l3,h3;

vector<vector<int> >v;
int matrix_median(const vector<vector<int> > &v);


int greater_than_mid(const vector<vector<int> >&v,int med);
int smaller_than_mid(const vector<vector<int> >&v,int med);
int is_there(const vector<vector<int> > &v,int med);
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
	   
//	   cout<<v[0].size()<<endl;
//	   
//	   cout<<v.size()<<endl;

	   	   
	   
	 	res=matrix_median(v);
	 	
	 	cout<<res<<endl;
	 
	return 0;
}

int matrix_median(const vector<vector<int> >& A)
{
    n=A.size()*A[0].size();
    
    l=1e5;h=-1;
    
    for(i=0;i<A.size();i++)
    {
        if(A[i][0]<l)
        l=A[i][0];
    }
    
    
    for(i=0;i<A.size();i++)
    {
        if(A[i][A[0].size()-1]>h)
        h=A[i][A[0].size()-1];
    }
    
    //cout<<l<<" "<<h<<endl;
    
   while(l<=h)
	 {
	    //cout<<l<<" "<<h<<endl;
	 	med=l+floor((h-l)/2);
	 	
	 	
	 	if(is_there(A,med))
	 	{
	 	L=smaller_than_mid(A,med);
	 	R=greater_than_mid(A,med);
	 	
	 	//cout<<L<<" "<<R<<endl;
	 	
	 	if(n/2>=L && n/2<=(n-R-1))
	 	return med;
	 	else if(n/2>(n-R-1))
	 	l=med+1;
	 	else if(n/2<(L))
	 	h=med-1;
	 	}
	 	else
	 	{
	 	L=smaller_than_mid(A,med);
	 	R=greater_than_mid(A,med);
	 	    
	 	if(R>n/2)
	 	l=med+1;
	 	else if(L>n/2)
	 	h=med-1;
	 	}
// 	 cout<<l<<" "<<h<<endl;	
	 }
	 
	 
}

int smaller_than_mid(const vector<vector<int> >&v,int med)
{
	sm=0;
	cols=v[0].size();
	
	
	
	for(i=0;i<v.size();i++)
	{
		l1=0;h1=v[0].size()-1;
		ans=-1;
		while(l1<=h1)
		{
			mid=l1+floor((h1-l1)/2);
			
			if(v[i][mid]>=med)
			{
				ans=mid;
				h1=mid-1;
			}
			else
			l1=mid+1;
		}
		sm+=l1;
	}
		cout<<l1<<endl;
	return sm;
}


int greater_than_mid(const vector<vector<int> > &v,int med)
{
	g=0;
	cols=v[0].size();
	
	for(i=0;i<v.size();i++)
	{
		l2=0;h2=cols-1;
		ans=-1;
		while(l2<=h2)
		{
			mid=l2+floor((h2-l2)/2);
			
			if(v[i][mid]>med)
			{
				ans=mid;
				h2=mid-1;
			}
			else
			l2=mid+1;
		}
		cout<<l2<<endl;
		g+=v[0].size()-l2;
	}
	cout<<g<<endl;
	return g;
}



int is_there(const vector<vector<int> > &A,int med)
{
    
    i=0;
    while(i<A.size())
    {
        l3=0;h3=A[0].size()-1;
        flag=0;
        while(l3<=h3)
        {
            mid=l3+floor((h3-l3)/2);
            
            if(A[i][mid]==med)
             {
                 flag=1;
                 break;
             }
            else if(A[i][mid]>med)
            h3=mid-1;
            else
            l3=mid+1;
        }
        if(flag)
        break;
        else
        i++;
    }
    
    return flag;
    
}

