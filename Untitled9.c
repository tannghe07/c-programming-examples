#include<stdio.h>
int main(){
	int a;
	scanf("%d", &a);
	printf("So nguyen A la %d", a);
	if(a==100){
		printf("\nA = 100");
	}
	else if(a>100){
		printf("\nA la so nguyen lon hon 100");
	}else{
		printf("\nA la so nguyen nho hon 100");
	}
	return 0;
}

