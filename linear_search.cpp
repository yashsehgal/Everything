#include<iostream>
using namespace std;
int main()
{
	int a[10]={46,32,89,100,11,2,78,66,56,15};
	int num,x=0;
	cout<<"Enter a number to search in the list : ";
	cin>>num;
	for(int i=0;i<=9;i++)
	{
		if(a[i]==num)
		{
			x=1;
			break;
		}
	}
	if (x==1)
	{
		cout<<num<<" is present in the list."
	}
	else
	{
		cout<<num<<" is not present in the list."
	}
 	return 0;
}