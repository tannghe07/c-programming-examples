#include<stdio.h>
int main(){
	int n, i, j=0;
	int a[100000];
	scanf("%d", &n);
	while(n>0){
		a[j]=n%10;
		n/=10;
		j++;
	}
	int tmp = a[0];
	a[0] = a[j-1];
	a[j-1] = tmp;
	if(a[j-1]!=0){
		for(i=j-1;i>=0;i--) printf("%d", a[i]);
	}
	else{
		for(i=j-2;i>=0;i--) printf("%d", a[i]);
	}
	return 0;
}

