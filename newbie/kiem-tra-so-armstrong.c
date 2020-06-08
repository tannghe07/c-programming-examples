#include<stdio.h>
#include<stdbool.h>
#include<math.h>
int dem(int n){
	int count=0;
	while(n>=10){
		n/=10;
		count++;
	}return count+1;
}
bool kt(int n){
	int i, j, sum=0;
	int m=n;
	while(m){
		i=m%10;
		m/=10;
		j=pow(i, dem(n));
		sum+=j;
	}if(sum==n) return true;
	return false;
}
int main(){
	int n;
	scanf("%d", &n);
	if(kt(n)) printf("1");
	else printf("0");
	return 0;
}

