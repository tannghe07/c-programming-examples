#include<conio.h>
#include<stdio.h>
int fb(int n)
{
    if(n==1||n==0||n==2||n==3) return n;//fb la fibonacci
   return fb(n-2)+fb(n-1);
}
int main()
{
   int i,n,d=0;
   scanf("%d",&n);
   for(i=0;i<=n;i++)
       if(n==fb(i))
       {
            d++;            
       }
   if(d==1) printf("1");
   else printf("0");
   
} 
