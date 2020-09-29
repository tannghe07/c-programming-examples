#include<stdio.h>
#include<stdbool.h>
bool kt(int n){
	int i;
	if(n<2) return false;
	for(i=2;i<n;i++){
		if(n%i==0) return false;
	}
	return true;
}
int main(){
	int a[100][100];
	int n, i, j, sum=0, count=0;
	scanf("%d", &n);
	for(i=0;i<n;i++){
		for(j=0;j<n;j++) scanf("%d", &a[i][j]);
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(i>=j){
				if(kt(a[i][j])){
					count++;
					sum+=a[i][j];
				}
			}
		}
	}
	if(count!=0) printf("%d", sum);
	else printf("%d", count);
	return 0;
}

