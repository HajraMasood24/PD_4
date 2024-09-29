#include <iostream>
using namespace std;

void sol(int n1,int n2);

main()
{
	int n1,n2;
	cout<<"Enter the first number:";
	cin>>n1;
	cout<<"Enter the second number:";
	cin>>n2;
	sol(n1,n2);
}
void sol(int n1,int n2)
{
if (n1==n2){
	cout<<"true";
}
if (n1!=n2){
	cout<<"false";
}
}