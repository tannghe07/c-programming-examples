#include<stdio.h>
#include<stdlib.h>
typedef struct{
	char *firstname;
	char *lastname;
	int age;
}Person;
void getperson(Person *p){
	p->firstname=malloc(50*sizeof(char));
	p->lastname=malloc(50*sizeof(char));
	printf("Enter your firstname: ");
	scanf("%s", p->firstname);
	printf("\nEnter your lastname: ");
	scanf("%s", p->lastname);
	printf("\nEnter your age: ");
	scanf("%d", &p->age);
}
void showinfo(const Person person){
	printf("\nPerson info: \nFirstname: %s\nLast name: %s\nAge: %d\n"
	,person.firstname, person.lastname, person.age);
	
}
void modify(Person *ptr){
	ptr->firstname="Nhan";
}
int main(){
	Person person;
	getperson(&person);
	printf("\nBefore modify:\n");
	showinfo(person);
	modify(&person);
	printf("\nAfter modify:\n");
	showinfo(person);
	return 0;
}

