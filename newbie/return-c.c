#include<stdio.h>
int main(){
	int i,j;
	for(i=4;i>0;i--){
		for(j=8;j<8;j--){
			if(j<=(3-i)&&j>=(3+i))
				printf("   ");
			else printf(" * ");
				
		
		}printf("\n");
	}
	return 0;
}
