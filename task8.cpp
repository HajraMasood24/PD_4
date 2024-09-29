#include <iostream>
using namespace std;
void pet(int holidays);

main()
{
	int holidays;
	cout<<"Holidays:";
	cin>>holidays;
	pet(holidays);
}

void pet(int holidays)
{	
	float hr,min;
	int wd,t,d,h;
	wd=365-holidays;
	t=(wd*63)+(holidays*127);
	d=30000-t;
	hr=d/60;
	h=hr;
	min=d%60;
if (d>=1)
{
	cout<<"Tom sleeps well."<<endl;
	cout<<h<<"hours and "<<min<<"minutes less for play";
}
else
{
	cout<<"Tom will run away."<<endl;
	cout<<(-h)<<"hours and "<<(-min)<<"minutes for play";
}
}