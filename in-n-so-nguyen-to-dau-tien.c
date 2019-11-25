#include<stdio.h>
int main(){
	int n, i, j, k, count=0;
	scanf("%d", &n);
	for(i=2;;i++){
		for(k=1,j=2;j<=i/2;j++){
			if(i%j==0){
				k=0;
				break;
			}
		}if(k!=0){
			printf("%d\t", i);
			++count;
		}
		if(count==n){
			break;
		}
		
	}
	return 0;
}

