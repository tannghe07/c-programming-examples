#include<stdio.h>
int main(){
	int a;
	printf("How many seasons in a year?\n");
	printf("A. 1\nB. 2\nC. 3\nD. 4\n");
	printf("Choose your answer: ");
	scanf("%c", &a);
	switch(a){
		case'a':
		case'A':
		case'b':
		case'B':
		case'c':
		case'C':{
			printf("\n You choose the wrong answer!");
			break;
		}
		case'd':
		case'D':{
			printf("\n Congratulation!");
			break;
		}
	}
	return 0;
}

