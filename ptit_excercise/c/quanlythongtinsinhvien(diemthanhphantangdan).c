#include<stdio.h>
#include<string.h>
struct svien{
	int id;
	char name[100];
	float d1, d2, d3;
};
typedef struct svien sv;
void nhap(sv a[], int n){
	FILE *fptr=fopen("B19DCCN572.bin", "wb");
	int i=0, id1=1;
	while(n--){
		a[i].id=id1++;
		gets(a[i].name);
		a[i].name[strlen(a[i].name)-1]="\0";
		fscanf(fptr, "%f%f%f", &a[i].d1, &a[i].d2, &a[i].d3);
		i++;
		fseek(fptr, 0, SEEK_END);
		fwrite(&a.name, 1, strlen(a.name), fptr);
		fwrite(&a.d1, sizeof(a.d1), 2, fptr);
		fwrite(&a.d2, sizeof(a.d2), 2, fptr);
		fwrite(&a.d3, sizeof(a.d3), 2, fptr);
	}
	fclose(fptr);
}
int main(){
	int chon, idf, n;
	sv sv1[100];
	scanf("%d", &chon);
	switch(chon){
		case 1:
			scanf("%d", &n);
			nhap(sv1, n);
			break;
		case 2:
			scanf("%d", &idf);
			printf("%d", idf);
			break;
		case 3:
			break;
	}
	return 0;
}

