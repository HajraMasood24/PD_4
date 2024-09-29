#include <iostream>
#include<windows.h>
using namespace std;

void gotoxy(int x,int y);
void printMenu();
void calculateAggregate(string name,float matricMarks,float interMarks,float ecatMarks);
void compareMarks(string nameStd1,int ecatMarksStd1,string nameStd2,int ecatMarksStd2);

main()
{
	int choice=0;
	string name,nameStd1,nameStd2;
	float interMarks , matricMarks , ecatMarks;
	float a,ecatMarksStd1,ecatMarksStd2;
	int c;
	system("cls");
	
	
	while (choice != 2)
	{
	 printMenu();	
	 cout<<"Enter your choice:";
	 cin>>c;
		if (c == 1)
		{
			cout<<"Enter name :";
			cin>>name;
			cout<<"Enter matric marks :";
			cin>>matricMarks;
			cout<<"Enter inter marks :";
			cin>>interMarks;
			cout<<"Enter ecat marks :";
			cin>>ecatMarks;
			calculateAggregate(name,matricMarks,interMarks,ecatMarks);
		}
		if (c == 2)
		{
			
			cout<<"Enter name of 1st student:";
			cin>>nameStd1;
			cout<<"Enter ecat marks of 1st student:";
			cin>>ecatMarksStd1;
			cout<<"Enter name of 2nd student:";
			cin>>nameStd2;
			cout<<"Enter ecat marks of 2nd student:";
			cin>>ecatMarksStd2;
		compareMarks(nameStd1,ecatMarksStd1,nameStd2,ecatMarksStd2);
		}
	}

	

}
void printMenu()
{
	gotoxy(8,4);
        cout<<" #  # ### ### # # ### ##   ## ### ### # #        #  ##  # # ###  ##  ## ###  #  ###         "<<endl;
	gotoxy(8,5);
	cout<<" #  # # #  #  # # #   # # #    #   #  # #       # # # # ###  #  #   #    #  # # # #         "<<endl;
	gotoxy(8,6);
	cout<<" #  # # #  #  # # ##  ##   #   #   #   #        ### # # ###  #   #   #   #  # # # #         "<<endl;
	gotoxy(8,7);
	cout<<" #  # # #  #  # # #   # #   #  #   #   #        # # # # # #  #    #   #  #  # # # #         "<<endl;
	gotoxy(8,8);
	cout<<" #### # # ###  #  ### # # ##  ###  #   #        # # ##  # # ### ##  ##  ###  #  # #         "<<endl;
	gotoxy(8,9);
	cout<<"                                                                                            "<<endl;
        gotoxy(8,10);
	cout<<" # #  #  ###  #   ## ### # # ### ### ###         ## # #  ## ### ### # #                     "<<endl;
	gotoxy(8,11);
	cout<<" ### # # # # # # #   #   ### #   # #  #         #   # # #    #  #   ###                     "<<endl;
	gotoxy(8,12);
	cout<<" ### ### # # ### # # ##  ### ##  # #  #          #   #   #   #  ##  ###                     "<<endl;
	gotoxy(8,13);
	cout<<" # # # # # # # # # # #   # # #   # #  #           #  #    #  #  #   # #                     "<<endl;
	gotoxy(8,14);
	cout<<" # # # # # # # #  ## ### # # ### # #  #         ##   #  ##   #  ### # #                     "<<endl;


	gotoxy(8,18);
	cout<<"Choices:"<<endl;
	gotoxy(8,20);
	cout<<"1.Calculation of Aggregate"<<endl;
	gotoxy(8,21);
	cout<<"2.Assigning roll number"<<endl;
	gotoxy(8,23);
	cout<<"____________________________________________________________________________________________"<<endl;
}

void calculateAggregate(string name,float matricMarks,float interMarks,float ecatMarks)
{
	string n;
	float a,b,c;
	float agg;
	a=((matricMarks/1100)*0.30)*100;
	b=((interMarks/550)*0.30)*100;
	c=((ecatMarks/400)*0.40)*100;
	agg=a+b+c;
	cout<<"Aggregate of "<<name<<" is:"<<agg;
}

void compareMarks(string nameStd1,int ecatMarksStd1,string nameStd2,int ecatMarksStd2)
{
	if (ecatMarksStd1 > ecatMarksStd2)
	{

	  	cout<<nameStd1<<"will get first roll number"<<endl;
	}
	if (ecatMarksStd1 < ecatMarksStd2)
	{
	  	cout<<nameStd2<<"will get first roll number"<<endl;
	}
	
}

void gotoxy(int x,int y)
{
 COORD coordinates;
 coordinates.X=x;
 coordinates.Y=y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
}