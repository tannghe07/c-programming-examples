#include<stdio.h>
#include<stdbool.h>
bool nt(int n){
	int i;
	if(n<2) return false;
	for(i=2;i<n;i++){
		if(n%i==0) return false;
	}
	return true;
}
bool tong(int n){
	int i, sum=0;
	while(n){
		i=n%10;
		n/=10;
		sum+=i;
	}if(sum%5==0) return true;
	return false;
}
int main(){
	int n, i, count=0;
	scanf("%d", &n);
	for(i=1;i<=n;i++){
		if(nt(i)&&tong(i)){
			printf("%d ", i);
			count++;
		}
	}printf("\n%d",count);
	return 0;
}

