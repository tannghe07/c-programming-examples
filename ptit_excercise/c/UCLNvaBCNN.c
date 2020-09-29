#include<stdio.h>
int main(){
	int a, b, i, c, m;
	scanf("%d%d", &a, &b);
	for(i=1;i<=a&&i<=b;i++){
		if(a%i==0&&b%i==0)
		c=i;
    }
    m=a*b;
    printf("%d %d", c, m/c);
	return 0;
}

