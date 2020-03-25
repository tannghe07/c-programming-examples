#include<stdio.h>
int main(){
	double c, pi=0;
	int n, s=1;
	scanf("%lf", &c);
	while(1){
		pi+=s*1.0/(2*n+1);
		s*=-1;
		++n;
		if(1.0/(2*n+1)<=c) break;
	}pi*=4;
	printf("%lf", pi);
	return 0;
}

