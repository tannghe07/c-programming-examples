#include<stdio.h>
#include<math.h>
int main(){
	int T, X, N, i;
	unsigned long long k, j;
	scanf("%d", &T);
	while(T>=1&&T<=100){
		scanf("%d%d", &X, &N);
		if(X>=1&&X<=30&&N>=1&&N<=30){
			k=1;
			for(i=1;i<N;i++){
				j=k;
				k*=X;
				k+=j;
			}
				printf("%llu\n", k);
		}
		T--;
	}
	return 0;
}

