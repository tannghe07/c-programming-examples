#include<stdio.h>
int main(){
	int n, i, j;
	scanf("%d", &n);
	for(i=1;i<=n;i++){
		int sum=0;
		for(j=1;j<i;j++)
			if(i%j==0) sum+=j;
		if(sum==i) printf("%d ", i);
	}
	return 0;
}


