#include<stdio.h>
int tong(int n){
	int j, sum=0;
	while(n>0){
		j=n%10;
		n/=10;
		sum+=j;
	}
	return sum;
}
int kt(int n){
	int i, count=0;
	for(i=1;i<=n;i++){
		if(n%i==0){
			count++;
		}
	}if(count==2) return 1;
	else return 0;
}
int dem(int n){
	int i, count=0;
	for(i=2;i<=n;i++){
		if(kt(i)==1&&tong(i)%5==0){
			count++;
		}
	}return count;
}
int main(){
	int n ,i, j, k, h, a=0;
	scanf("%d", &n);
	for(i=2;i<=n;i++){
		if(kt(i)==1&&tong(i)%5==0){
			printf("%d ", i);
		}
	}printf("\n%d", dem(i));
	return 0;
}

