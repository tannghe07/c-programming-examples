#include<stdio.h>
int main(){
	int a, b, i, j, count=0;
	scanf("%d%d", &a, &b);
	for(j=a; j<=b; j++){
		for(i=1; i<=j; i++){
			if(j%i==0){
				count++;
			}
		}if(count==2) printf(" %d ", j);
		count=0;
    }			
	return 0;
}

