#include<stdio.h>
#include<stdbool.h>
bool tn(int n){
	int i, m, j=0;
	m=n;
	while(m){
		i=m%10;
		m/=10;
		j*=10;
		j+=i;
	}if(j==n) return true;
	return false;
}
int main(){
	int n, i;
	int j=0, count=0;
	int a[100];
	int b[100];
	scanf("%d", &n);
	for(i=0;i<n;i++){
		scanf("%d", &a[i]);
	}
	for(i=0;i<n;i++){
		if(tn(a[i])&&a[i]>10){
			b[j]=a[i];
			count++;
			j++;
		}
	}
	printf("%d ", count);
	for(i=0;i<j;i++){
		printf("%d ", b[i]);
	}
	return 0;
}

