#include<iostream>
#include<windows.h>
using namespace std;

void gotoxy(int x,int y);
void printmaze();
void moveplayer(int x,int y);

main()
{	
	int x=4, y=4;
	system("cls");
	printmaze();
	while (true)
	{
		moveplayer(x,y);
		x=x+1;
		if(x==21)
		{
		   x=4;
		}
	}
		
	
}

void moveplayer(int x,int y)
{
	gotoxy(x,y);
	cout<<"P";
	Sleep(200);
	gotoxy(x,y);
	cout<<"  ";
}


void printmaze()
{
	cout<<"############################"<<endl;
	cout<<"#                          #"<<endl;
	cout<<"#                          #"<<endl;
	cout<<"#                          #"<<endl;
	cout<<"#                          #"<<endl;
	cout<<"#                          #"<<endl;
	cout<<"#                          #"<<endl;
	cout<<"#                          #"<<endl;
	cout<<"#                          #"<<endl;
	cout<<"############################"<<endl;
}

void gotoxy(int x,int y)
{
 COORD coordinates;
 coordinates.X = x;
 coordinates.Y = y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}