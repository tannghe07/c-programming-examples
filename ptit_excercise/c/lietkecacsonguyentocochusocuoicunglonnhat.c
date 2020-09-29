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
bool cs(int n){
	int i, j=0;
	int a[100];
	while(n){
		a[j]=n%10;
		n/=10;
		j++;
	}
	int max=a[0];
	for(i=1;i<j;i++){
		if(a[i]>max) max=a[i];
	}
	if(max==a[0]) return true;
	else return false;
}
int main(){
	int n, i, count=0;;
	scanf("%d", &n);
	for(i=2;i<=n;i++){
		if(nt(i)&&cs(i)){
			count++;
			printf("%d ", i);
		}
	}
	printf("\n%d", count);
	return 0;
}

