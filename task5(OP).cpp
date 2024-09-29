#include<iostream>
#include<windows.h>
using namespace std;
void gotoxy(int,int);

main()
{
	system("cls");
	gotoxy(32,1);
	cout<<"##   ##    #####   ########  ######    #####"<<endl;
        gotoxy(32,2);
        cout<<"##   ##   ##   ##  ########  ##   ##  ##   ##"<<endl;
	gotoxy(32,3);
        cout<<"#######   #######     ##     ######   #######"<<endl;
	gotoxy(32,4);
        cout<<"##   ##   ##   ##  #  ##     ##   ##  ##   ##"<<endl;
	gotoxy(32,5);
        cout<<"##   ##   ##   ##  ####      ##   ##  ##   ##"<<endl;
}


void gotoxy(int x,int y)
{
 COORD coordinates;
 coordinates.X=x;
 coordinates.Y=y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
}

