#include<stdio.h>
int main(){
	char choose;
	printf("How many seasons in a year? : \n");
	printf(" A.1\n B.2\n C.3\n D.4\n ");
	printf("Choose your answer : ");
	choose=getchar() ;
	switch (choose){
		case'a':
		case'A':
		case'b':
		case'B':
		case'c':
		case'C':{
			printf("\nYou choose wrong answer!");
			break;
		}
		case'd':
		case'D':{
			printf("\a\nCongratulation!");
			break;
		}
	}
	return 0;
}
