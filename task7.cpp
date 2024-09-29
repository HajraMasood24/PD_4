#include <iostream>
using namespace std;
void flowershop(float redRose,float whiteRose,float tulip);
main()
{
	float redRose,whiteRose,tulip;
	cout<<"Red Rose:";
	cin>>redRose;
	cout<<"White Rose:";
	cin>>whiteRose;
	cout<<"Tulip:";
	cin>>tulip;
	flowershop(redRose,whiteRose,tulip);
}

void flowershop(float redRose,float whiteRose,float tulip)
{	
	float op,fp;
	op=(redRose*2.00)+(whiteRose*4.10)+(tulip*2.50);
	cout<<"Original price:$"<<op<<endl;
if (op>200){
	fp=op-(op*0.20);
	cout<<"Price after discount:"<<fp;
}
if (op<=200){
	fp=op;
	cout<<"No discount applied.";
}
}