#include <iostream>
#include <windows.h>
using namespace std;

void gotoxy(int x,int y);
void h();
void a();
void s();
void n();



int main()
{
	system("cls");
	h();
	 cout<<("\n");
	gotoxy(1,6);
	a();
	 cout<<("\n");
	gotoxy(1,13);
	s();
	 cout<<("\n");
	gotoxy(1,20);
	s();
	 cout<<("\n");
	gotoxy(1,27);
	 cout<<("\n");
	a();
	 cout<<("\n");
	gotoxy(1,34);
	n();
	 cout<<("\n");
	gotoxy(1,43);
}
void h()
{
      
 	cout<<"##   ##"<<endl;
	cout<<"##   ##"<<endl;
        cout<<"#######"<<endl;
	cout<<"#######"<<endl;
        cout<<"##   ##"<<endl;
}	
	
void a()
{
        
 	cout<<"#######"<<endl;
	cout<<"#######"<<endl;
        cout<<"##   ##"<<endl;
	cout<<"#######"<<endl;
        cout<<"##   ##"<<endl;
}

void s()
{
       
 	cout<<"#######"<<endl;
	cout<<"##     "<<endl;
        cout<<"######  "<<endl;
	cout<<"    ##  "<<endl;
        cout<<"######  "<<endl;
}




void n()
{
    
 	cout<<"##   ##"<<endl;
	cout<<"#### ##"<<endl;
        cout<<"## ####"<<endl;
	cout<<"##  ###"<<endl;
        cout<<"##   ##"<<endl;
}
void gotoxy(int x,int y)
{
 COORD coordinates;
 coordinates.X = x;
 coordinates.Y = y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
	