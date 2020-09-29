#include<iostream>
using namespace std;
void insertionSort(int arr[], int n)
{
   int i, key, j;
   for (i = 1; i < n; i++)
   {
       key = arr[i];
       j = i-1;
       while (j >= 0 && arr[j] > key)
       {
           arr[j+1] = arr[j];
           j = j-1;
       }
       arr[j+1] = key;
   }
}
int main(){
	int a[10000];
	int t;
	cin>>t;
	while(t>0){
		int n, m;
		cin>>n>>m;
		int k=n*m;
		int i, j;
		for(i=0;i<k;i++) cin>>a[i];
		insertionSort(a, k);
		for(i=0;i<k;i++) cout<<a[i]<<" ";
		cout<<endl;
		t--;
	}
	return 0;
}

