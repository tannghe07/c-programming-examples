#include<stdio.h>
#include<conio.h>
#include<stdbool.h>
int Try(int n, int k, int mang[], int i, bool check[])
{
    int j;
    for(j = 0; j < n; j++)
    {
        if(check[j] == true)  // n?u chua du?c gán cho các v? trí phía tru?c
        {
            mang[i] = j + 1;
            check[j] = false;  // d?i l?i thành false d? các v? trí sau không du?c dùng n?a
 
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
 
            check[j] = true;   // gán l?i thành true d? vì v? trí i hi?n s?p t?i không s? d?ng giá tr? j n?a.
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
 
    bool check[n];  // khai báo m?ng bool g?m n ph?n t?
 
    int i;
    for(i = 0; i < n; i++)   // kh?i t?o giá tr? cho m?ng bool 
    {
        check[i] = true;
    }
 
    int mang[k];
 
    Try(n, k, mang, 0, check);
 
    getch();
    return 0;
}

