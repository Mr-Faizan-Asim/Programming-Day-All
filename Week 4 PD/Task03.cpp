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
int x = 3;
int y = 3;
void playrMove(int x, int y);

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
	gotoxy(int x-1, int y);
	cout << " ";
	gotoxy(x,y);
	cout <<"P"
	Sleep(200);
}	
	



}
