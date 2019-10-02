#include<stdio.h>
int main(){// scope
	int n;
	printf("\nNhap so tu nhien n: ");
	scanf("%d", &n);
	
	int i;
	printf("\nCac so chan nho hon %d: ", n);
	for(i = 0; i<n; i++)
		if(i%2 == 0)
			printf("%d ", i);
			
	printf("\nCac so le nho hon %d: ", n);
	for(i = 0; i<n; i++)
		if(i%2 != 0)
			printf("%d ", i);
			
	return 0;
}

