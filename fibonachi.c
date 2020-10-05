*/ https://www.facebook.com/utkarsh.agrawal.94009/posts/208600234157458
*/ subscribed by ONLY CODE




#include<stdio.h>
int main()
{
	int a,b,c,n;
	printf("Enter the limit of Fibonacci Series:\n");
	scanf("%d",&n);
	printf("The Fibonacci Series is:\n");
	if(n==0)
		printf("%d",n);
		else if(n==1)
		printf("%d %d",n-1,n);
		else
		{
		a=0;
    	printf("%d,",a);
		b=1;
		printf("%d,",b);
	     	for(int i=3;i<=n;i++)
      	    {
	
		     c=a+b;
		     printf("%d ,",c);
	       	a=b;
	       	b=c;	
	   }
			
		}

	  
	return 0;
	
	
}


