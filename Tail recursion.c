#include <stdio.h>
  int fib (int n,int a,int b) {
  
    if (n==0) 
    return a;
    
    if (n==1)
    return b;
    
    return fib(n-1,b,a+b);
  }
  
int main()
{
  int n,ans;
  
  scanf("%d",&n);
  
  ans=fib(n,0,1);
  
  printf("%d\n",ans);
  
  return 0;
}
