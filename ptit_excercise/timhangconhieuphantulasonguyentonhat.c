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
	int n, i, j, d;
	int a[100][100];
	int b[100];
	scanf("%d", &n);
	for(i=0;i<n;i++){
		for(j=0;j<n;j++) scanf("%d", &a[i][j]);
	}
	for(i=0;i<n;i++){
		int count=0;
		for(j=0;j<n;j++){
			if(nt(a[i][j])){
				count++;
			}
			b[i]=count;
		}
	}
	int max=b[0];
	for(i=0;i<n;i++){
		if(b[i]>max){
			max=b[i];
			d=i;
		}
	}
	printf("%d\n", d+1);
	for(j=0;j<n;j++){
		if(nt(a[d][j])) printf("%d ", a[d][j]);
	}
	return 0;
}

