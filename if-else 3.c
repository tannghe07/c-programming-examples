#include<stdio.h>
int main(){
	int a;
	scanf("%d", &a);
	printf("So tuoi cua hoc sinh la %d", a);
	if(a>=15){
		printf("\nHoc sinh du tuoi vao lop 10");
	}
	else{
		printf("\nHoc sinh khong du tuoi vao lop 10");
	}
	return 0;
}

