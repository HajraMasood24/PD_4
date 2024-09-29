#include <iostream>
using namespace std;
void fp(string,float);
main()
{
	string country;
	float price;
while(true)
{
	cout<<"Enter the name of the country:";
	cin>>country;
	cout<<"Enter the ticket price in dollars:$";
	cin>>price;
	fp(country,price);
}
}
void fp(string country,float price)
{
	float dis;
if (country=="Pakistan"){
	dis=price-(price*0.05);
	cout<<"Final ticket after discount:$"<<dis<<endl;
}
if (country=="Ireland"){
	dis=price-(price*0.1);
	cout<<"Final ticket after discount:$"<<dis<<endl;
}	
if (country=="India"){
	dis=price-(price*0.2);
	cout<<"Final ticket after discount:$"<<dis<<endl;
}	
if (country=="England"){
	dis=price-(price*0.3);
	cout<<"Final ticket after discount:$"<<dis<<endl;
}	
if (country=="Canada"){
	dis=price-(price*0.45);
	cout<<"Final ticket after discount:$"<<dis<<endl;
}

}		