#include<stdio.h>
int main(){
	int n, i, j, count=0;
	scanf("%d", &n);
	for(j=2; j<=n; j++){
		for(i=1; i<=j; i++){
			if(j%i==0){
				count++;
			}
		}if(count==2) printf(" %d ", j);
		count=0;
    }			
	return 0;
}

