#include <iostream>
#include <conio.h>
using namespace std;
int main()
{

long int socuoi, so1,so2,sodaonguoc=0;
cout << "Nhap mot so nguyen : " << endl;
cin>>so1;
so2=so1;
do//tach cac chu so cuoi roi cong dan vao nhau
{
sodaonguoc=sodaonguoc*10;
socuoi=so1%10;
sodaonguoc+=socuoi;
so1/=10;
}
while(so1);
cout << "So nguyen ban da nhap la " << so2 <<endl;
cout << "So nguyen dao nguoc la " << sodaonguoc <<endl;
return 0;
}
