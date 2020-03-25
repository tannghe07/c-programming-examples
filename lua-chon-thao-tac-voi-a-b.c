#include<stdio.h>
int main(){
	char luachon;
	printf("Lua chon hanh dong de thuc hien voi hai so a va b:\n1.a+b \n2.a-b \n3.a*b ");
	scanf("%d", &luachon);
	switch( luachon ){
		case 1:{
			int a, b;
			printf("Nhap vao hai so a va b: ");
			scanf("%d%d", &a, &b);
			printf("%d+%d=%d", a, b, a+b);
			break;
		}
	}
	return 0;
}

