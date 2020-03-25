#include<stdio.h>
#include<stdlib.h>

typedef struct {
	char *firstName;
	char *lastName;
	int age;
}P;
int main(){
	P person={
		"Tan", "Nghe", 20
	};
//	person.firstName= "Tan";
//	person.lastName="Nghe";
//	person.age= 18;
	
	
	printf("\nPerson info: \nFirst Name: %s\nLast Name: %s\nAge: %d",
	person.firstName, person.lastName, person.age);
	return 0;
}

