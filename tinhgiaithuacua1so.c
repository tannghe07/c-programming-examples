#include<stdio.h>
int main(){
	unsigned long long a, i, giaithua=1;
	scanf ("%llu", &a);
	if(a>=0){
	for(i=1;i<=a;i++){
		giaithua*=i;
	}printf("%llu", giaithua);
}
	return 0;
}

