#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long
#define ONLINE_JUDGE
//Insertion of node at the beginning
const int N=1e5+5;
const int mod=1e9+7;

struct node
{
	int data;
	node* next;
};
node *head,*temp,*temp1,*prv;

int i,j,n,cnt,res,m,t,flag,x;

void insert(int x);
void print();

int32_t main()
{
	#ifndef ONLINE_JUDGE
       freopen("qns.txt","r",stdin);
       freopen("ans.txt","w",stdout);
    #endif
       IOS;

	   cin>>n;
	   head=NULL;
	   flag=0;
	   for(i=0;i<n;i++)
	   {
	   	cout<<"Enter the "<<(i+1)<<" node:"<<endl;
	   	cin>>x;
	   	insert(x);
	   	cout<<"The list so far: ";
	   	print();
	   	cout<<endl;
	   }


	return 0;
}

void insert(int x)
{
	if(flag==0)
	{
		temp=new node();
		temp->data=x;
		temp->next=NULL;
		head=temp;
		prv=temp;
		flag=!flag;
	}
	else
	{
		temp1=new node();
		temp1->data=x;
		temp1->next=prv;
		head=temp1;
		prv=temp1;
	}
}
void print()
{
	node *temp1;
	temp1=head;
	while(temp1 !=NULL)
	{
		cout<<temp1->data<<" ";
		temp1=temp1->next;
	}
}


