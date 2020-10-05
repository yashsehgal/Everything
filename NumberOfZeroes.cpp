// https://www.facebook.com/anul.rajeev/posts/345077733501869
// Subscribed by Anul Rajeev

//Function returns the number of zeroes of n!
int zeroes(int n)
{
  int count=0;
  long long i=5;
  while(n/i)
   {
     count+=n/i;
     i*=5;
   }
  return count;
}
    
