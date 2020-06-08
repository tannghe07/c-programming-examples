#include<stdio.h>
#include<string.h>
int main(){
	char a[100];
	int count1=0, count2=0, count3=0;
	int i, j;
	gets(a);
	j=strlen(a);
	for(i=0;i<j;i++){
		if(a[i]>=48&&a[i]<=57){
			count1++;
		}
		else if((a[i]>=65&&a[i]<=90)||(a[i]>=97&&a[i]<=122)){
			count2++;
		}
		else count3++;
	}
	printf("%d %d %d", count2, count1, count3);
	return 0;
}

