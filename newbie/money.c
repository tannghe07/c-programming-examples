#include<stdio.h>
int main(){
	float a, b;
	scanf("%f", &a);
	printf("Doanh thu cua ban la %f", a);//Don vi: trieu vnd
	if(a<=100){
		b=(a*5)/100;
		printf("\nHoa hong ban nhan duoc la %f", b);
	}else if(a<=300&&a>100){
		b=(a*10)/100;
		printf("\nHoa hong ban nhan duoc la %f", b);
	}else if(a>300){
		b=(a*20)/100;
		printf("\nHoa hong ban nhan duoc la %f", b);
	}
	return 0;
}

