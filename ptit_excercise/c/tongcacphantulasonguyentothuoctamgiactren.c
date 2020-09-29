#include<stdio.h>
#include<stdbool.h>
#include<math.h>
bool snt(int n){
	int i;
	if(n<2) return false;
	else{
		for(i=2;i<=sqrt(n);i++){
			if(n%i==0) return false;
		}
		return true;
	}
}
int main(){
	int a[100][100];
	int n, i, j, sum=0;
	scanf("%d", &n);
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d", &a[i][j]);
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(i<=j){
				if(snt(a[i][j])){
					sum+=a[i][j];
				}
			}
		}
	}
	printf("%d", sum);
	return 0;
}

