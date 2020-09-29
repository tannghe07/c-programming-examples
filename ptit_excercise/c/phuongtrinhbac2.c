#include<stdio.h>
#include<math.h>
int main(){
	int a, b, c, d, e, f, x1, x2, x3;
	scanf("%d%d%d", &a, &b, &c);
	if(a==0&&b==0&&c!=0) printf("NO");
	else if(a!=0){
		d=b*b-4*a*c;
		if(d<0) printf("NO");
		else if(d>0) {
		float e=(float)-b+sqrt(d);
		float f=(float)-b-sqrt(d);
		float x1=(float)e/(2*a);
		float x2=(float)f/(2*a);
		printf("%.2f %.2f", x1, x2);
		}
		else if(d==0){
			float x3=(float)-b/(2*a);
			printf("%.2f", x3);
		}
	}
	return 0;
}

