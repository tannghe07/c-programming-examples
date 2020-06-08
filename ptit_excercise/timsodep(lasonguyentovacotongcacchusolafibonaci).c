#include<stdio.h>
#include<stdbool.h>
bool snt(int n){
	int i;
	if(n<2) return false;
	for(i=2;i<n;i++){
		if(n%i==0) return false;
	}
	return true;
}
int fb(int n)
{
   	if(n==0||n==1||n==2||n==3) return n;
   	return fb(n-2)+fb(n-1);
}
bool kt(int n){
	int i, j, sum=0;
	while(n){
		j=n%10;
		n/=10;
		sum+=j;
	}
	for(i=0;i<=sum;i++){
		if(sum==fb(i)) return true;
	}
	return false;
}
int main(){
	int a, b, i;
	scanf("%d%d", &a, &b);
	a<b;
	if(a>b){
		int tmp=a;
		a=b;
		b=tmp;
	}
	for(i=a;i<=b;i++){
		if(snt(i)&&kt(i)) printf("%d ", i);
	}
	return 0;
}

