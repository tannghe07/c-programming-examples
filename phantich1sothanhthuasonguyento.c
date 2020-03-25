#include<stdio.h>
int snt(int n){
	int i, j, count=0;
	for(i=1;i<=n;i++){
		if(n%i==0){
			count++;
		}
	}if(count==2) return n;
}
int main(){
	int n, i, j;
	scanf("%d", &n);
	for(i=2;i<=n;i++){
		for(;n%snt(i)==0;n/=snt(i)){
			printf("%d ", snt(i));
		}
	}
	return 0;
}
