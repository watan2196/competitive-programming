#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long
#define ONLINE_JUDGE
// merge two sorted linked lists
const int N=1e5+5;
const int mod=1e9+7;


struct node
{
	int data;
	node* next;
};
node* head,*temp,*temp1;
int i,j,n,cnt,res,m,t,x;
void insert(int x,int cnt);
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
	   cout<<"Enter the "<<n<<" nodes"<<endl;
	   cnt=0;
	   for(i=0;i<n;i++)
	   {
	   	cin>>x;
	   	insert(x,cnt);
	   	cnt++;
	   }
	   print();
	   
 
	return 0;
}
void insert(int x,int cnt)
{
	if(cnt==0)
	{
	temp=new node();
	
	temp->data=x;
	temp->next=NULL;
	
	head=temp;
	}
	else
	{
		temp1=head;
		temp=new node();
		temp->data=x;
		temp->next=NULL;
		while(temp1 !=NULL)
		{
			temp1=temp1->next;
		}
		temp1->next=temp;
	}
	
}
void print()
{
	temp1=head;
	while(temp1 !=NULL)
	{
		cout<<temp1->data<<" ";
		temp1=temp1->next;
	}
	
}
	

