#include <iostream>
#include <windows.h>
using namespace std;
void gotoxy(int x,int y);
void printName();
main()

int main()
{
void printName(); 
 
}

void gotoxy(int x,int y)

{
 COORD coordinates;
 cordinates.X = x;
 cordinates.Y = y;
 SetConsoleCursorPosition(GetStdHandle(STD_OOTPUT_HANDLE), coordinates);

}
void printName()
{
gotoxy(40,128);
 cout<<"A";
 gotoxy(41,128);
 cout<<"W";
 gotoxy(42,128);
 cout<<"I";
 gotoxy(43,128);
 cout<<"S";
}

