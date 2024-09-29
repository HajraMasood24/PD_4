#include <iostream>
using namespace std;

void ans(string);

main()
{
	string tf;
	cout<<"Enter 'true' or 'false':";
	cin>>tf;
	ans(tf);
}

void ans(string tf)
{
if (tf=="true"){
	cout<<"false";
}
if (tf=="false"){
	cout<<"true";
}
}