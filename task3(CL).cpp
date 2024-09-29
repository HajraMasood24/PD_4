#include <iostream>
#include<windows.h>
using namespace std;
void gotoxy(int x, int y);
void printMaze();
void moveplayer(int x,int y);

main()
{
	int x = 4,y = 4;
	system("cls");
	printMaze();
	moveplayer(x,y);
	gotoxy(0,10);
}

void printMaze()
{
	cout<<"#############################"<<endl;
	cout<<"#                           #"<<endl;
	cout<<"#                           #"<<endl;
	cout<<"#                           #"<<endl;
	cout<<"#                           #"<<endl;
	cout<<"#                           #"<<endl;
	cout<<"#                           #"<<endl;
	cout<<"#                           #"<<endl;
	cout<<"#############################"<<endl;
}

void moveplayer(int x,int y)
{
	gotoxy(x,y);
	cout<<"P";
	Sleep(100);
	cout<< "  ";
}

void gotoxy(int x, int y)
{
 COORD coordinates;
 coordinates.X = x;
 coordinates.Y = y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}