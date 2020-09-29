#include<stdio.h>
#include<stdbool.h>
int kt(int n){
	int a;
	while(n){
		a=n%10;
		if(a!=0&&a!=6&&a!=8){
			return false;
			break;
		}
		else return true;
		n/=10;
	}
}
int main(){
	int a, b, c;
	scanf("%d", &a);
	if(kt(a)) printf("1");
	else printf("0");
	return 0;
}

