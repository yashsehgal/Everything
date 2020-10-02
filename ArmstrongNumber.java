# https://www.facebook.com/harhar.modi.1232/posts/706155836649246
# Submited by Code House

# A program to check given number is Armstrong number or not

class ArmstrongNumber{  
  public static void main(String[] args)  {  
    int c=0,a,temp;  
    int n=153;//It is the number to check armstrong  
    temp=n;  
    while(n>0)  
    {  
    a=n%10;  
    n=n/10;  
    c=c+(a*a*a);  
    }  
    if(temp==c)  
    System.out.println("It is a armstrong number");   
    else  
        System.out.println("It is not armstrong number");   
   }  
}
