#include<iostream>
#include<conio.h>
using namespace std;
struct node
{
	int data;
	node* link;
};
node* start=NULL;
void create()
{
	node* p=new node;
	cout<<"enter new data";
	cin>>p->data;
    p->link=NULL;
	if(start==NULL)
	{
		start=p;
	}
	else
	{
		node* q=start;
		while(q->link!=NULL)
		{
			q=q->link;
		}
		q->link=p;
	}
}
void display()
{
	node* k=start;
	while(k!=NULL)
	{
		cout<<k<<"\t"<<k->data<<"\t"<<k->link<<"\n";
		k=k->link;
	}
}
int main()
{
	int ch;
	do
	{
		cout<<"enter 1 for create 2 to display";
		cin>>ch;
		if(ch==1)
		create();
		else if(ch==2)
		display();
		else
		cout<<"invalid display";
	}
	while((ch==1)||(ch==2));
	
}
