#include<stdio.h>
int main(){
	int a;
	scanf("%d",&a);
	printf("nhap vao so tien=%d",a);
	if(a>=1000){
		printf("\nA la trieu phu");
	}
	else{
		printf("\nA khong la trieu phu");
	}
	return 0;
}

