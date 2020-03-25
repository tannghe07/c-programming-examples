#include<stdio.h>
int main(){
	int a, i, j, k;
	scanf("%d", &a);
	for(i=1;i<=a;i++){
		k=0;
		for(j=1;j<i;j++){
			if(i%j==0){
				k+=j;
			}
		}if(k==i) printf("%d ", i);
	}
	return 0;
}

