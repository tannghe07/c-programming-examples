#include<stdio.h>
#include<conio.h>
#include<stdbool.h>
int Try(int n, int k, int mang[], int i, bool check[])
{
    int j;
    for(j = 0; j < n; j++)
    {
        if(check[j] == true)  // n?u chua du?c g�n cho c�c v? tr� ph�a tru?c
        {
            mang[i] = j + 1;
            check[j] = false;  // d?i l?i th�nh false d? c�c v? tr� sau kh�ng du?c d�ng n?a
 
            if(i == (k - 1))
            {
                int temp;
                for(temp = 0; temp < k; temp++)
                {
                    printf("%d  ", mang[temp]);
                }
                printf("\n");
            }
             
            else
            {
                Try(n, k, mang, i + 1, check);
            }
 
            check[j] = true;   // g�n l?i th�nh true d? v� v? tr� i hi?n s?p t?i kh�ng s? d?ng gi� tr? j n?a.
        }
    }
 
}
 
int main()
{
    int n, k;
 
    printf("Nhap vao n : ");
    scanf("%d", &n);
 
    printf("Nhap vao k : ");
    scanf("%d", &k);
 
    bool check[n];  // khai b�o m?ng bool g?m n ph?n t?
 
    int i;
    for(i = 0; i < n; i++)   // kh?i t?o gi� tr? cho m?ng bool 
    {
        check[i] = true;
    }
 
    int mang[k];
 
    Try(n, k, mang, 0, check);
 
    getch();
    return 0;
}

