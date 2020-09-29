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
int main(){
	int n, i, k, j=0;
	int a[100];
	int b[100];
	int c[100];
	scanf("%d", &n);
	while(n){
		c[j]=n%10;
		j++;
		n/=10;
	}
	for(i=0;i<j;i++) a[i]=c[j-i-1];
	for(i=0;i<j;i++) b[i]=1;
	for(i=0;i<j;i++){
		int count=1;
		if(b[i]&&nt(a[i])){
			b[i]=0;
			for(k=i+1;k<j;k++){
				if(a[i]==a[k]) {
					count++;
					b[k]=0;
				}
			}
			printf("%d %d\n", a[i], count);
		}
	}
	return 0;
}

