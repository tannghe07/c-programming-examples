#include<stdio.h>
int main(){
	int a, i, count1=0, count2=0;
	scanf("%d", &a);
	while(a>0){
		i=a%10;
		a=a/10;
		if(i%2==0) count1++;
		else count2++;
		
	}printf("%d %d", count2, count1);
	return 0;
}

