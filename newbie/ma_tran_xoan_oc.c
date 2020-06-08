#include <conio.h>
#define row 5
#define col 5

void main()
{
	int a[row][col];
	int value=1,hangTren=0,hangDuoi=row-1,cotTrai=0,cotPhai=col-1;
	clrscr();
	while(value<=row*col)
		{
		  for(int i=cotTrai;(i<=cotPhai)&&(value<=row*col);i++,value++)
			 a[hangTren][i]=value;

		  hangTren++;

		  for(int j=hangTren;(j<=hangDuoi)&&(value<=row*col);j++,value++)
			 a[j][cotPhai]=value;
		  cotPhai--;

		  for(int k=cotPhai;(k>=cotTrai)&&(value<=row*col);k--,value++)
			 a[hangDuoi][k]=value;
		  hangDuoi--;

		  for(int h=hangDuoi;(h>=hangTren)&&(value<=row*col);h--,value++)
			 a[h][cotTrai]=value;
		  cotTrai++;
		}
	for(int i=0;i<row;i++)
		{
		  for(int j=0;j<col;j++)
			 printf("%3.d ",a[i][j]);
		  printf("\n");
		}
	getch();
}

