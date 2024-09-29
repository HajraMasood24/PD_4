#include <iostream>
using namespace std;
void lt(int h,int m);

main()
{
	int h,m;
	cout<<"Enter the number of hours:";
	cin>>h;
	cout<<"Enter the number of minutes:";
	cin>>m;
	lt(h,m);
}
void lt(int h,int m)
{
	int tt;
  	tt=h*60;
if (tt>m){
	cout<<h;
}
if (tt<m){
	cout<<m;
}
}