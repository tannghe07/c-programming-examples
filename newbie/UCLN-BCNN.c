#include<stdio.h>
int main(){
	int a, b, i, c, luachon, m;
	scanf("%d%d", &a, &b);
	printf("lua chon thao tac:\n1.UCLN\t2.BCNN\n");
	scanf("%d", &luachon);
	switch(luachon){
		case 1 :{
			for(i=1;i<=a&&i<=b;i++){
				if(a%i==0&&b%i==0)
				c=i;
			}printf("UCLN cua %d va %d la: %d", a, b, c);
			break;
		}
		case 2 :{
			while(a!=b){
				m=a*b;
				if(a>b) a=a-b;
				else b=b-a;
			}printf("BCNN cua %d va %d la: %d",a , b, m/a);
			break;
		}
	}
	return 0;
}

