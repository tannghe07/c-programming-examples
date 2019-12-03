#include<stdio.h>

int main(){
	long n=0;
	double c, x, e=0, k, gt=1;
	scanf("%lf%lf", &x, &c);
	k=1;
	if(x==0) e=1;
	else
	while(1){
		e+=k/gt;
		n++;
		k*=x;
		gt*=n;
		if((k>0&&k/gt<=c)||(k<0&&-1*k/gt<=c)) break;
	}printf("e^%0.2lf = %0.6lf", x, e);
	return 0;
}

