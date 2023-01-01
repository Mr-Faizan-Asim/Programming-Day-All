#include <iostream>
#include <windows.h>
using namespace std;
void gotoxy(int x,int y);
main()

int main()
{
 gotoxy(40,128);
 cout<<"MUHAMMAD FAIZAN ASIM";
}

void gotoxy(int x,int y)

{
 COORD coordinates;
 cordinates.X = x;
 cordinates.Y = y;
 SetConsoleCursorPosition(GetStdHandle(STD_OOTPUT_HANDLE), coordinates);

}


