#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long
#define ONLINE_JUDGE

const int N=1e5+5;
const int mod=1e9+7;

int i,j,n,cnt,res,m,t,a,b;
int arr[N];
vector<int>tree;
void build(int node,int l,int h)
{
	if(l == h)
	{
		tree[node]=arr[l];
		return;
	}
	int mid=(l+h)/2;
	build(2*node+1,l,mid);
	build(2*node+2,mid+1,h);
	tree[node]=tree[2*node+1] + tree[2*node+2];
}
void update(int node,int l,int h,int pos,int val)
{
	if(l == h)
	{
		arr[pos]=val;
		tree[node]=val;
		return;
	}
	int mid=(l+h)/2;
	if(pos<=mid)
	update(2*node+1,l,mid,pos,val);
	else
	update(2*node+2,mid+1,h,pos,val);
	
	tree[node]=tree[2*node+1]+tree[2*node+2];
}
int query(int node,int l,int h,int i,int j)
{
	if(l>j || h<i)
	return 0;
	if(l>=i && h<=j)
	return tree[node];
	int mid=(l+h)/2;
	return query(2*node+1,l,mid,i,j) + query(2*node+2,mid+1,h,i,j); 
}
int32_t main()
{
	#ifndef ONLINE_JUDGE
       freopen("qns.txt","r",stdin);
       freopen("ans.txt","w",stdout);
    #endif
       IOS;
		int q;
		cin>>n>>q;
		for(int i=0;i<n;i++)
		cin>>arr[i];
		
		tree.resize(4*n+5);
		build(0,0,n-1);
		
		while(q--)
		{
			int i,j,qt;
			cin>>qt;
			if(qt == 1)
			{
				int pos,val;
			cin>>pos>>val;
			update(0,0,n-1,pos-1,val);
			}
			else
			{
			cin>>i>>j;
			cout<<query(0,0,n-1,i-1,j-1)<<endl;
			}
		}	
	   

	return 0;
}

