#include<stdio.h>
#include<math.h>
#include<conio.h>
int main(){
	int a;
	scanf("%d", &a);
	printf("So tien cua ban la %d", a);
	if(a>=1000){
		printf("\n=>Ban la trieu phu");
	}
	else{
		printf("\n=>Ban chua la trieu phu");
	}
	return 0;
}

