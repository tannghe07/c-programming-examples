#include<stdio.h>
#include<stdbool.h>
#include<math.h>
bool nt(int n){
	int i;
	if(n<10) return false;
	for(i=2;i<n;i++){
		if(n%i==0) return false;
	}
	return true;
}
bool td(int n){
	while (n>=10)
	{
        int donvi=n%10;
        n=n/10;
        if(donvi<=n%10)
        {
            return false;
        }
	}
return true;

}
bool gd(int n){
	while (n>=10)
	{
        int donvi=n%10;
        n=n/10;
        if(donvi>=n%10)
        {
            return false;
        }
	}
return true;
}
int main(){
	int n, i, a, b, count=0;
	scanf("%d", &n);
	a=pow(10, n-1);
	b=pow(10, n);
	for(i=a;i<b;i++){
		if((td(i)||gd(i))&&nt(i)) count++; 
	}
	printf("%d", count);
	return 0;
}

