#include<stdio.h>
int main(){
	float a, b;
	scanf("%f", &a);
	if(a>=20){
		b=a*5/100;
	}else if(a>=10&&a<20){
		b=a*3/100;
	}else if(a<10){
		b=a*1/100;
	}printf("%.1f", b);

	return 0;
}

