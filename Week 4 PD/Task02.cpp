#include <iostream>
#include <windows.h>
using namespace std;
void gotoxy(int x,int y);
void printMaze();
main()



int main()
{
system("cls");
void printMaze();



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