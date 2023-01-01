#include <iostream>
#include <windows.h>
using namespace std;
void gotoxy(int x,int y);
void playrMove(int x, int y);
void printMaze();
main()

int main()
{
system("cls");
void printMaze();
int x = 18;
int y = 2;
	while()
  {
		void playrMove(int x, int y);
		if(y < 11)
	{
	y= y + 1;
	}
	if(y == 11)
	{
	gotoxy(x,y-1);
	cout<<" ";
	y=2;
	}	 
  }
}

void gotoxy(int x,int y)

{
 COORD coordinates;
 cordinates.X = x;
 cordinates.Y = y;
 SetConsoleCursorPosition(GetStdHandle(STD_OOTPUT_HANDLE), coordinates);

}
void printMaze()
{
cout<<"##################################"<<endl;
cout<<"#                                #"<<endl;
cout<<"#                                #"<<endl;
cout<<"#                                #"<<endl;
cout<<"#                                #"<<endl;
cout<<"#                                #"<<endl;
cout<<"#                                #"<<endl;
cout<<"#                                #"<<endl;
cout<<"#                                #"<<endl;
cout<<"#                                #"<<endl;
cout<<"#                                #"<<endl;
cout<<"#                                #"<<endl;
cout<<"##################################"<<endl;

}
void playrMove(int x, int y)
{
	gotoxy(int x, int y-1);
	cout << " ";
	gotoxy(x,y);
	cout <<"P"
	Sleep(200);
}	
	



}
