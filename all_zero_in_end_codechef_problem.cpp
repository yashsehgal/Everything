// https://www.facebook.com/permalink.php?story_fbid=2806378226310731&id=100008157437260
// Subscribed by isux gaming

#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr[n],i,temp,count=0;
	cout<<"entr the array elements: ";
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"\n final array is : ";
	while(1)
	{
		for(i=0;i<n;i++)
		{
			if(arr[i]==0)
			{
				temp=arr[i];
				arr[i]=arr[i+1];
				arr[i+1]=temp;
			}
		}
		count++;
		if(count>n)
		{
			break;
		}
	}
	
	for(i=0;i<n;i++)
	{
		if(arr[i]==0)
		{
			arr[i-1]=0;
			break;
		}
	}
	for(i=0;i<n;i++)
	{
		cout<<arr[i]<<"\t";
	}
}
